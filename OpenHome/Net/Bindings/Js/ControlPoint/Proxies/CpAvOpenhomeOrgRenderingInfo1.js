 

/**
* Service Proxy for CpProxyAvOpenhomeOrgRenderingInfo1
* @module ohnet
* @class RenderingInfo
*/
    
var CpProxyAvOpenhomeOrgRenderingInfo1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-RenderingInfo-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "RenderingInfo";
    this.version = "1";
    this.serviceName = "av.openhome.org-RenderingInfo-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["Info"] = new ohnet.serviceproperty("Info","string");

          
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgRenderingInfo1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgRenderingInfo1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "Info" property change events
* @method Info_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgRenderingInfo1.prototype.Info_Changed = function (stateChangedFunction) {
    this.serviceProperties.Info.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to GetEntireInfo
* @method GetEntireInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgRenderingInfo1.prototype.GetEntireInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetEntireInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Info"] = ohnet.soaprequest.readStringParameter(result["Info"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



