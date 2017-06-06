 

/**
* Service Proxy for CpProxyAvOpenhomeOrgWebResamplerConfig1
* @module ohnet
* @class WebResamplerConfig
*/
    
var CpProxyAvOpenhomeOrgWebResamplerConfig1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-WebResamplerConfig-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "WebResamplerConfig";
    this.version = "1";
    this.serviceName = "av.openhome.org-WebResamplerConfig-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["ResamplerConfig"] = new ohnet.serviceproperty("ResamplerConfig","string");

          
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgWebResamplerConfig1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgWebResamplerConfig1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "ResamplerConfig" property change events
* @method ResamplerConfig_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgWebResamplerConfig1.prototype.ResamplerConfig_Changed = function (stateChangedFunction) {
    this.serviceProperties.ResamplerConfig.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to GetResamplerConfig
* @method GetResamplerConfig
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgWebResamplerConfig1.prototype.GetResamplerConfig = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetResamplerConfig", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["ResamplerConfig"] = ohnet.soaprequest.readStringParameter(result["ResamplerConfig"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetResamplerConfig
* @method SetResamplerConfig
* @param {String} ResamplerConfig An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgWebResamplerConfig1.prototype.SetResamplerConfig = function(ResamplerConfig, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetResamplerConfig", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("ResamplerConfig", ResamplerConfig);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



