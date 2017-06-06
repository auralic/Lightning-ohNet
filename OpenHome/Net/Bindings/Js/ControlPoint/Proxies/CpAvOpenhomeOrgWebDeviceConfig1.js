 

/**
* Service Proxy for CpProxyAvOpenhomeOrgWebDeviceConfig1
* @module ohnet
* @class WebDeviceConfig
*/
    
var CpProxyAvOpenhomeOrgWebDeviceConfig1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-WebDeviceConfig-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "WebDeviceConfig";
    this.version = "1";
    this.serviceName = "av.openhome.org-WebDeviceConfig-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["Alive"] = new ohnet.serviceproperty("Alive","bool");
    this.serviceProperties["DeviceConfig"] = new ohnet.serviceproperty("DeviceConfig","string");
    this.serviceProperties["CurrentAction"] = new ohnet.serviceproperty("CurrentAction","int");

                      
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgWebDeviceConfig1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgWebDeviceConfig1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "Alive" property change events
* @method Alive_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgWebDeviceConfig1.prototype.Alive_Changed = function (stateChangedFunction) {
    this.serviceProperties.Alive.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "DeviceConfig" property change events
* @method DeviceConfig_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgWebDeviceConfig1.prototype.DeviceConfig_Changed = function (stateChangedFunction) {
    this.serviceProperties.DeviceConfig.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "CurrentAction" property change events
* @method CurrentAction_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgWebDeviceConfig1.prototype.CurrentAction_Changed = function (stateChangedFunction) {
    this.serviceProperties.CurrentAction.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}


/**
* A service action to GetDeviceConfig
* @method GetDeviceConfig
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgWebDeviceConfig1.prototype.GetDeviceConfig = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetDeviceConfig", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["DeviceConfig"] = ohnet.soaprequest.readStringParameter(result["DeviceConfig"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetDeviceConfig
* @method SetDeviceConfig
* @param {String} DeviceConfig An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgWebDeviceConfig1.prototype.SetDeviceConfig = function(DeviceConfig, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetDeviceConfig", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("DeviceConfig", DeviceConfig);
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
CpProxyAvOpenhomeOrgWebDeviceConfig1.prototype.GetWiFiList = function(successFunction, errorFunction){ 
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
CpProxyAvOpenhomeOrgWebDeviceConfig1.prototype.SetTimeZone = function(TimeZone, CurrentTime, TimeStamp, successFunction, errorFunction){ 
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


/**
* A service action to GetServiceLocation
* @method GetServiceLocation
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgWebDeviceConfig1.prototype.GetServiceLocation = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetServiceLocation", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["ServiceLoaction"] = ohnet.soaprequest.readStringParameter(result["ServiceLoaction"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



