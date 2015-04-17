 

/**
* Service Proxy for CpProxyAvOpenhomeOrgUSBInfo1
* @module ohnet
* @class USBInfo
*/
    
var CpProxyAvOpenhomeOrgUSBInfo1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-USBInfo-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "USBInfo";
    this.version = "1";
    this.serviceName = "av.openhome.org-USBInfo-1";
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
CpProxyAvOpenhomeOrgUSBInfo1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgUSBInfo1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}




/**
* A service action to GetUSBInfo
* @method GetUSBInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgUSBInfo1.prototype.GetUSBInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetUSBInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["USBPlugStatus"] = ohnet.soaprequest.readBoolParameter(result["USBPlugStatus"]); 
        result["USBERRORInfo"] = ohnet.soaprequest.readStringParameter(result["USBERRORInfo"]); 
        result["USBCapacity"] = ohnet.soaprequest.readStringParameter(result["USBCapacity"]); 
        result["USBFileCount"] = ohnet.soaprequest.readStringParameter(result["USBFileCount"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



