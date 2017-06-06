 

/**
* Service Proxy for CpProxyAvOpenhomeOrgTestResamplerConfig1
* @module ohnet
* @class TestResamplerConfig
*/
    
var CpProxyAvOpenhomeOrgTestResamplerConfig1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-TestResamplerConfig-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "TestResamplerConfig";
    this.version = "1";
    this.serviceName = "av.openhome.org-TestResamplerConfig-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["CurrentAction"] = new ohnet.serviceproperty("CurrentAction","int");

          
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgTestResamplerConfig1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgTestResamplerConfig1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "CurrentAction" property change events
* @method CurrentAction_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgTestResamplerConfig1.prototype.CurrentAction_Changed = function (stateChangedFunction) {
    this.serviceProperties.CurrentAction.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}


/**
* A service action to SetResamplerConfig
* @method SetResamplerConfig
* @param {String} ResamplerConfig An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTestResamplerConfig1.prototype.SetResamplerConfig = function(ResamplerConfig, successFunction, errorFunction){ 
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
* A service action to GetResamplerConfig
* @method GetResamplerConfig
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTestResamplerConfig1.prototype.GetResamplerConfig = function(successFunction, errorFunction){ 
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
* A service action to SetPCMAutoDetect
* @method SetPCMAutoDetect
* @param {Boolean} PCMAutoDetect An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTestResamplerConfig1.prototype.SetPCMAutoDetect = function(PCMAutoDetect, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetPCMAutoDetect", this.url, this.domain, this.type, this.version);     
    request.writeBoolParameter("PCMAutoDetect", PCMAutoDetect);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetPCMAutoDetect
* @method GetPCMAutoDetect
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTestResamplerConfig1.prototype.GetPCMAutoDetect = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetPCMAutoDetect", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["PCMAutoDetect"] = ohnet.soaprequest.readBoolParameter(result["PCMAutoDetect"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetDSDtoPCM
* @method SetDSDtoPCM
* @param {Boolean} DSDtoPCM An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTestResamplerConfig1.prototype.SetDSDtoPCM = function(DSDtoPCM, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetDSDtoPCM", this.url, this.domain, this.type, this.version);     
    request.writeBoolParameter("DSDtoPCM", DSDtoPCM);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetDSDtoPCM
* @method GetDSDtoPCM
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgTestResamplerConfig1.prototype.GetDSDtoPCM = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetDSDtoPCM", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["DSDtoPCM"] = ohnet.soaprequest.readBoolParameter(result["DSDtoPCM"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



