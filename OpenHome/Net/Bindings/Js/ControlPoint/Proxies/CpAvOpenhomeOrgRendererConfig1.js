 

/**
* Service Proxy for CpProxyAvOpenhomeOrgRendererConfig1
* @module ohnet
* @class RendererConfig
*/
    
var CpProxyAvOpenhomeOrgRendererConfig1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-RendererConfig-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "RendererConfig";
    this.version = "1";
    this.serviceName = "av.openhome.org-RendererConfig-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["RendererConfig"] = new ohnet.serviceproperty("RendererConfig","string");
    this.serviceProperties["ResamplerConfig"] = new ohnet.serviceproperty("ResamplerConfig","string");
    this.serviceProperties["HardwareConfig"] = new ohnet.serviceproperty("HardwareConfig","string");

                      
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "RendererConfig" property change events
* @method RendererConfig_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.RendererConfig_Changed = function (stateChangedFunction) {
    this.serviceProperties.RendererConfig.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "ResamplerConfig" property change events
* @method ResamplerConfig_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.ResamplerConfig_Changed = function (stateChangedFunction) {
    this.serviceProperties.ResamplerConfig.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "HardwareConfig" property change events
* @method HardwareConfig_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.HardwareConfig_Changed = function (stateChangedFunction) {
    this.serviceProperties.HardwareConfig.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}


/**
* A service action to GetRendererConfig
* @method GetRendererConfig
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.GetRendererConfig = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetRendererConfig", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["RendererConfig"] = ohnet.soaprequest.readStringParameter(result["RendererConfig"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetRendererConfig
* @method SetRendererConfig
* @param {String} RendererConfig An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.SetRendererConfig = function(RendererConfig, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetRendererConfig", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("RendererConfig", RendererConfig);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetResamplerConfig
* @method GetResamplerConfig
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.GetResamplerConfig = function(successFunction, errorFunction){ 
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
CpProxyAvOpenhomeOrgRendererConfig1.prototype.SetResamplerConfig = function(ResamplerConfig, successFunction, errorFunction){ 
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


/**
* A service action to GetHardwareConfig
* @method GetHardwareConfig
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.GetHardwareConfig = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetHardwareConfig", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["HardwareConfig"] = ohnet.soaprequest.readStringParameter(result["HardwareConfig"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetHardwareConfig
* @method SetHardwareConfig
* @param {String} HardwareConfig An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.SetHardwareConfig = function(HardwareConfig, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetHardwareConfig", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("HardwareConfig", HardwareConfig);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetWiFiList
* @method GetWiFiList
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.GetWiFiList = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetWiFiList", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["WiFiList"] = ohnet.soaprequest.readStringParameter(result["WiFiList"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetTimeZone
* @method SetTimeZone
* @param {String} TimeZone An action parameter
* @param {String} CurrentTime An action parameter
* @param {String} TimeStamp An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgRendererConfig1.prototype.SetTimeZone = function(TimeZone, CurrentTime, TimeStamp, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetTimeZone", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("TimeZone", TimeZone);
    request.writeStringParameter("CurrentTime", CurrentTime);
    request.writeStringParameter("TimeStamp", TimeStamp);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



