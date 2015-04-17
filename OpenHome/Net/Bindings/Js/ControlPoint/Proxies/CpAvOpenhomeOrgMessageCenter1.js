 

/**
* Service Proxy for CpProxyAvOpenhomeOrgMessageCenter1
* @module ohnet
* @class MessageCenter
*/
    
var CpProxyAvOpenhomeOrgMessageCenter1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-MessageCenter-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "MessageCenter";
    this.version = "1";
    this.serviceName = "av.openhome.org-MessageCenter-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["Message"] = new ohnet.serviceproperty("Message","string");
    this.serviceProperties["MessageID"] = new ohnet.serviceproperty("MessageID","int");

                
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgMessageCenter1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgMessageCenter1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "Message" property change events
* @method Message_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgMessageCenter1.prototype.Message_Changed = function (stateChangedFunction) {
    this.serviceProperties.Message.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "MessageID" property change events
* @method MessageID_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgMessageCenter1.prototype.MessageID_Changed = function (stateChangedFunction) {
    this.serviceProperties.MessageID.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}


/**
* A service action to GetMessage
* @method GetMessage
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgMessageCenter1.prototype.GetMessage = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetMessage", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Message"] = ohnet.soaprequest.readStringParameter(result["Message"]); 
        result["MessageID"] = ohnet.soaprequest.readIntParameter(result["MessageID"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



