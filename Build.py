import sys
import os
import subprocess
import threading
import shutil

def rssh(username,host,cmd):

    import paramiko

    ssh = paramiko.SSHClient()
    ssh.set_missing_host_key_policy(paramiko.AutoAddPolicy())

    ssh.connect(host, username=username, look_for_keys='True')

    stdin, stdout, stderr = ssh.exec_command(cmd)

    def get_thread(pipe):
        for line in pipe.readlines():
            print line

    stdout_thread = threading.Thread(target=get_thread, args=(stdout,))
    stderr_thread = threading.Thread(target=get_thread, args=(stderr,))

    stdout_thread.start()
    stderr_thread.start()
    stdout_thread.join()
    stderr_thread.join()

    channel = stdout.channel

    exit_status = channel.recv_exit_status()

    return exit_status

    ssh.close()

def rsync(username,host,src,dst,excludes):

    cmd = ['rsync', '-avz', ''+src+'', ''+username+'@'+host+':'+dst+'' ]

    for exclude in excludes:
        cmd.append('--exclude='+exclude+'')
    ret = subprocess.call(cmd)
    return ret

def getEnvironment():

    Label = os.environ.get('label')

    if Label == None:
        print '\'label\' not set in environment!'
        print 'Your options are:'
        print '     arm'
        print '     linux-x86'
        print '     linux-x64'
        print '     windows-x86'
        print '     windows-x64'
        print ''
        print 'ps: we are aware that \'label\' is a terrible name for this parameter.'
        print ''
        sys.exit(1)

    if Label == 'arm':
        tool = 'env'
        ostype = 'Linux'
        arch = 'arm'
        os.environ['PATH'] = "/usr/local/arm-2010q1/bin:"+ os.environ['PATH']
        os.environ['CROSS_COMPILE'] = 'arm-none-linux-gnueabi-'

    elif Label == 'linux-x64':
        tool = 'env'
        ostype = 'Linux'
        arch = 'x64'

    elif Label == 'linux-x86':
        tool = 'env'
        ostype = 'Linux'
        arch = 'x86'
		
    elif Label == 'macos-x64':
        tool = 'env'
        ostype = 'MacOS'
        arch = 'x86'

    elif Label == 'windows-x86':
        tool = 'call vcvarsall.bat && (set LOCALAPPDATA=C:\Documents and Settings\Administrator\Local Settings\Application Data)'
        ostype = 'Windows'
        arch = 'x86'

    elif Label == 'windows-x64':
        tool = 'call vcvarsall.bat amd64 && set'
        ostype = 'Windows'
        arch = 'x64'
        os.environ['CS_PLATFORM'] = 'x64'

    # Check whether we can run valgrind

    if ostype == "Windows" or (ostype == "Linux" and arch != "x86") or ostype == "MacOS":
        valgrind = "0"
    else:
        valgrind = ''
                                                    
    if os.environ.get('nightly') == 'true':
        nightly = '1'
    else:
        nightly = '0'

    if os.environ.get('PUBLISH_RELEASE') == 'true':
        release_version = os.environ.get('RELEASE_VERSION')
    else:
        release_version = None

        
    return {'tool':tool, 'ostype':ostype, 'arch':arch, 'valgrind_run':valgrind, 'nightly_run':nightly, 'release_version':release_version }


def getModule(): 

    Module = os.environ.get('module')

    if Module == None:
        print '\'module\' not set in environment!'
        print 'Your options are:'
        print '     upnp'
        print '     zappSpyGUI'
        sys.exit(1)

    if Module == 'upnp':
        module = 'upnp'
        cmd = 'python AllTests.py'
    
    return {'module':module, 'cmd':cmd}
        

def getArguments(module,nightly,arch,valgrind,os):
    args = ' --silent'
    if arch == 'arm':
        args += ' --buildonly'
    elif arch == 'x64':
        args += ' --native'
    if os == 'MacOS':
	args += ' --buildonly'
    if os == 'Windows' and arch == 'x86':
        args += ' --js --java'
    if os != 'Windows' and nightly != '1':
        args += ' --debug'
    if os == 'Linux' and arch == 'x86':
	args += ' --java'
    if nightly == '1':
        args += ' --full'
        if os == 'Linux' and arch == 'x86':
            args += ' --valgrind'
	
    return {'args':args}
    
            

def Build(tool, cmd, args):

    print "Build args are "	+args

    ret = subprocess.check_call(tool + '&&' + cmd + args, shell=True)
    if ret != 0:
        print ret        
        sys.exit(10)

def DummyXML():

    if not os.path.exists("xout"):
        os.mkdir("xout")
    dummy = open("xout/dummy.xml", "w")
    dummy.writelines('<?xml version="1.0" encoding="UTF-8"?><testsuite errors="0" failures="0" name="dummy" tests="0"><testcase classname="autogenerated" name="autogenerated" time="0"></testcase></testsuite>')
    dummy.close()



vgpath = "vgout"
xout = "xout"

def StripChars(charname):

    charname = charname.replace('&', '')

    return charname

def ParseValgrind(filename):
    import xml.etree.ElementTree as ET
    fullpath = vgpath + '/' + filename

    doc = ET.parse(fullpath)
    errors = doc.findall('//error')

    out = open(xout + '/' + "vg-" + filename,"w")
    out.write('<?xml version="1.0" encoding="UTF-8"?>\n')
    out.write('<testsuite name="memcheck" tests="1" errors="0" failures="'+str(len(errors))+'" skip="0">\n')
    out.write('    <testcase classname="ValgrindMemoryCheck " \n')
    out.write('              name="'+filename+'" time="0">\n')

    for error in errors:
        kind = error.find('kind')
        what = error.find('what')
        if  what == None:
            what = error.find('xwhat/text')

        out.write('        <error type="'+kind.text+'">\n')
        out.write('            '+what.text+'\n')


        frames = error.findall('.//frame')

        for frame in frames:

            getObj = frame.find('ip')
            getFn = frame.find('fn')
            getDir = frame.find('dir')
            getFile = frame.find('file')
            getLine = frame.find('line')

            out.write(' ---- frame start ----\n')
            if getObj != None:
                obj = StripChars(getObj.text)
                out.write(' Object: '+obj+'\n')

            if getFn != None:
                function = StripChars(getFn.text)
                out.write(' Function: '+function+'\n')


            if getDir != None:
                dir = StripChars(getDir.text)
                out.write(' Directory: '+dir+'\n')

            if getFile != None:
                file = StripChars(getFile.text)
                out.write(' File: '+file+'\n')

            if getLine != None:
                line = StripChars(getLine.text)
                out.write(' Line: '+line+'\n')

            out.write(' ---- frame end ----\n')

        out.write('        </error>\n')

    out.write('    </testcase>\n')
    out.write('</testsuite>\n')
    out.close()


def ParseDir():

    dirList=os.listdir(vgpath)
    for fname in dirList:
        if fname != "ParseValgrind.py":
            print fname
            ParseValgrind(fname)




def GenDocs(module, os, nightly, arch, tool):

    if os == "Linux" and arch == "x86" and nightly == "1":


        docgen_cmd = "make docs"
        Build(tool,docgen_cmd,'')

        ret = rsync('hudson-zapp','ohnet.linn.co.uk','Build/Docs/','~/doc','')

        if ret != 0:
            print ret
            sys.exit(10)

        ret = rsync('hudson-rsync','openhome.org','Build/Docs/','~/build/nightly/docs','')

        if ret != 0:
            print ret
            sys.exit(10)
        
def ArmTests(module, arch, nightly):

    if arch == "arm":

        excludes = ['*.o', '*.a', 'Include','Docs']
        ret = rsync('root','sheeva010.linn.co.uk','Build','~/',excludes)
        ret = rsync('root','sheeva010.linn.co.uk','AllTests.py','~/',excludes)

        if ret != 0:
            print ret
            sys.exit(10)

        if nightly == "1":
		
            ret = rssh('root','sheeva010.linn.co.uk','python AllTests.py -f -t')

            if ret != 0:
            	print ret
             	sys.exit(10)

        else:
            ret = rssh('root','sheeva010.linn.co.uk','python AllTests.py -t')

            if ret != 0:
            	print ret
            	sys.exit(10)


def publish_release(ostype, arch, release_name, tool, build_type):
    release_type = "release" # release or debug
			     # hard coded for now - builds are broken for debug due to pdb server on win

    target_name = "%s-%s" % (ostype, "ARM" if arch=="arm" else arch)
    if ostype == "MacOS":
        print "No ability to publish releases for MacOS. Skip."
        return
    if ostype == "Windows":
        artifacts = '\\\\ohnet.linn.co.uk\\artifacts\\'
    else:
        artifacts = '/opt/artifacts/'
    cmd = 'make bundle-dev targetplatform=%s releasetype=%s' %( target_name, build_type)
    subprocess.check_call(tool + ' && ' + cmd, shell=True)
    release_source_bundle = 'Build/Bundles/ohNet-%s-%s-dev.tar.gz' %( target_name, build_type)
    release_target_bundle = '%sReleases/ohNet-%s-%s-%s.tar.gz' % (artifacts, release_name, target_name, release_type)
    shutil.copyfile(release_source_bundle, release_target_bundle)
    subprocess.check_call(['scp', '-r', release_source_bundle, 'releases@www.openhome.org:~/www/artifacts/ohNet/ohNet-%s-%s-%s.tar.gz' %( release_name, target_name, release_type)])

def writerev(ostype, arch):

	if ostype == "Windows": 
		artifacts = '\\\\ohnet.linn.co.uk\\artifacts\\'

	elif ostype == "Linux" and arch != "arm":
		artifacts = '/opt/artifacts/'
	else:
		artifacts = ''

	output = os.popen('git rev-parse HEAD')
	f = open(artifacts + 'revision.txt', 'w')
	output = subprocess.check_call('git rev-parse HEAD', stdout=f, shell=True)
	f.close()



def main():
    Environment = getEnvironment()
    Module = getModule()
    Arguments = getArguments(Module['module'],Environment['nightly_run'],Environment['arch'],Environment['valgrind_run'],Environment['ostype'])

    writerev(Environment['ostype'], Environment['arch'])

    Build(Environment['tool'],Module['cmd'],Arguments['args'])
    DummyXML()

    valgrind_run = Environment['valgrind_run']
    valgrind_nightly = Environment['nightly_run']

    if valgrind_run != "0" and valgrind_nightly == "1":
        ParseDir()

    ArmTests(Module['module'],Environment['arch'],Environment['nightly_run'])
    GenDocs(Module['module'],Environment['ostype'],Environment['nightly_run'],Environment['arch'],Environment['tool'])

    release_version = Environment['release_version']

    if release_version is not None:
        build_type = 'release'
        if '--debug' in Arguments['args']:
            build_type = 'debug'
        publish_release(Environment['ostype'], Environment['arch'], release_version, Environment['tool'], build_type)

if __name__=="__main__":
    main()
