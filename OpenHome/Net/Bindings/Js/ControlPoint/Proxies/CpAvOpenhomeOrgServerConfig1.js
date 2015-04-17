 

/**
* Service Proxy for CpProxyAvOpenhomeOrgServerConfig1
* @module ohnet
* @class ServerConfig
*/
    
var CpProxyAvOpenhomeOrgServerConfig1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-ServerConfig-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "ServerConfig";
    this.version = "1";
    this.serviceName = "av.openhome.org-ServerConfig-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};

    
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}




/**
* A service action to SetServerName
* @method SetServerName
* @param {String} ServerName An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.SetServerName = function(ServerName, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetServerName", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ServerName", ServerName);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetServerVersion
* @method GetServerVersion
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.GetServerVersion = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetServerVersion", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["ServerVersion"] = ohnet.soaprequest.readStringParameter(result["ServerVersion"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetProgressInfo
* @method GetProgressInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.GetProgressInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetProgressInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Progress"] = ohnet.soaprequest.readStringParameter(result["Progress"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetScanVersion
* @method GetScanVersion
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.GetScanVersion = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetScanVersion", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["ScanVersion"] = ohnet.soaprequest.readStringParameter(result["ScanVersion"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetWorkMode
* @method GetWorkMode
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.GetWorkMode = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetWorkMode", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["WorkMode"] = ohnet.soaprequest.readStringParameter(result["WorkMode"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetWorkMode
* @method SetWorkMode
* @param {String} WorkMode An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.SetWorkMode = function(WorkMode, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetWorkMode", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("WorkMode", WorkMode);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to DelAllLocalDB
* @method DelAllLocalDB
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.DelAllLocalDB = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("DelAllLocalDB", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Rescan
* @method Rescan
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.Rescan = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Rescan", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to HandMount
* @method HandMount
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.HandMount = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("HandMount", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to HandUMount
* @method HandUMount
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.HandUMount = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("HandUMount", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetDiskInfo
* @method GetDiskInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.GetDiskInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetDiskInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["IsConnected"] = ohnet.soaprequest.readBoolParameter(result["IsConnected"]); 
        result["StatusCode"] = ohnet.soaprequest.readStringParameter(result["StatusCode"]); 
        result["StatusInfo"] = ohnet.soaprequest.readStringParameter(result["StatusInfo"]); 
        result["Capacity"] = ohnet.soaprequest.readStringParameter(result["Capacity"]); 
        result["FileCount"] = ohnet.soaprequest.readStringParameter(result["FileCount"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetSMBConfig
* @method GetSMBConfig
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.GetSMBConfig = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetSMBConfig", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["SMBAddr"] = ohnet.soaprequest.readStringParameter(result["SMBAddr"]); 
        result["SMBUserName"] = ohnet.soaprequest.readStringParameter(result["SMBUserName"]); 
        result["SMBPassWord"] = ohnet.soaprequest.readStringParameter(result["SMBPassWord"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetSMBConfig
* @method SetSMBConfig
* @param {String} SMBAddr An action parameter
* @param {String} SMBUserName An action parameter
* @param {String} SMBPassWord An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.SetSMBConfig = function(SMBAddr, SMBUserName, SMBPassWord, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetSMBConfig", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("SMBAddr", SMBAddr);
    request.writeStringParameter("SMBUserName", SMBUserName);
    request.writeStringParameter("SMBPassWord", SMBPassWord);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetSMBConnectResult
* @method GetSMBConnectResult
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgServerConfig1.prototype.GetSMBConnectResult = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetSMBConnectResult", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["SMBConnectResult"] = ohnet.soaprequest.readBoolParameter(result["SMBConnectResult"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



