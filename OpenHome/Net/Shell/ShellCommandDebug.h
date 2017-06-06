#ifndef HEADER_SHELL_COMMAND_DEBUG
#define HEADER_SHELL_COMMAND_DEBUG

#include <OpenHome/Net/Private/Shell.h>
#include <OpenHome/Types.h>
#include <OpenHome/Buffer.h>

#include <vector>
#include <map>

namespace OpenHome {
class IWriter;
namespace Net {

class ShellCommandDebug : private IShellCommandHandler
{
public:
    ShellCommandDebug(Shell& aShell);
    ~ShellCommandDebug();
private: // from IShellCommandHandler
    void HandleShellCommand(Brn aCommand, const std::vector<Brn>& aArgs, IWriter& aResponse);
    void DisplayHelp(IWriter& aResponse);
private:
    void AddLevel(const TChar* aName, TUint aValue);
private:
    class Level
    {
    public:
        Level(const TChar* aName, TUint aValue);
        const TChar* Name() const;
        TUint Value() const;
    private:
        const TChar* iName;
        TUint iValue;
    };
private:
    Shell& iShell;
    typedef std::map<Brn, Level*, BufferCmp> LevelMap;
    LevelMap iLevels;
};

} // namespace Net
} // namespace OpenHome

#endif // HEADER_SHELL_COMMAND_DEBUG
