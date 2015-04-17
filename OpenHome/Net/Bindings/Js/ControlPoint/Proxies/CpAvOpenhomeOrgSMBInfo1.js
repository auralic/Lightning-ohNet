 

/**
* Service Proxy for CpProxyAvOpenhomeOrgSMBInfo1
* @module ohnet
* @class SMBInfo
*/
    
var CpProxyAvOpenhomeOrgSMBInfo1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-SMBInfo-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "SMBInfo";
    this.version = "1";
    this.serviceName = "av.openhome.org-SMBInfo-1";
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
CpProxyAvOpenhomeOrgSMBInfo1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgSMBInfo1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
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
CpProxyAvOpenhomeOrgSMBInfo1.prototype.SetSMBConfig = function(SMBAddr, SMBUserName, SMBPassWord, successFunction, errorFunction){ 
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
CpProxyAvOpenhomeOrgSMBInfo1.prototype.GetSMBConnectResult = function(successFunction, errorFunction){ 
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


/**
* A service action to GetSMBInfo
* @method GetSMBInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgSMBInfo1.prototype.GetSMBInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetSMBInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["SMBConnectStatus"] = ohnet.soaprequest.readBoolParameter(result["SMBConnectStatus"]); 
        result["SMBERRORInfo"] = ohnet.soaprequest.readStringParameter(result["SMBERRORInfo"]); 
        result["SMBCapacity"] = ohnet.soaprequest.readStringParameter(result["SMBCapacity"]); 
        result["SMBFileCount"] = ohnet.soaprequest.readStringParameter(result["SMBFileCount"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



