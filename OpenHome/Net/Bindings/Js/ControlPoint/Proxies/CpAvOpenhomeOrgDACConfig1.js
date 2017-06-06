 

/**
* Service Proxy for CpProxyAvOpenhomeOrgDACConfig1
* @module ohnet
* @class DACConfig
*/
    
var CpProxyAvOpenhomeOrgDACConfig1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-DACConfig-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "DACConfig";
    this.version = "1";
    this.serviceName = "av.openhome.org-DACConfig-1";
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
CpProxyAvOpenhomeOrgDACConfig1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgDACConfig1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "CurrentAction" property change events
* @method CurrentAction_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgDACConfig1.prototype.CurrentAction_Changed = function (stateChangedFunction) {
    this.serviceProperties.CurrentAction.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}


/**
* A service action to GetFilterMode
* @method GetFilterMode
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDACConfig1.prototype.GetFilterMode = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetFilterMode", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["FilterMode"] = ohnet.soaprequest.readStringParameter(result["FilterMode"]); 
        result["FilterModeList"] = ohnet.soaprequest.readStringParameter(result["FilterModeList"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetFilterMode
* @method SetFilterMode
* @param {String} FilterMode An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDACConfig1.prototype.SetFilterMode = function(FilterMode, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetFilterMode", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("FilterMode", FilterMode);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetDACPhase
* @method GetDACPhase
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDACConfig1.prototype.GetDACPhase = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetDACPhase", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Phase"] = ohnet.soaprequest.readIntParameter(result["Phase"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetDACPhase
* @method SetDACPhase
* @param {Int} Phase An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDACConfig1.prototype.SetDACPhase = function(Phase, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetDACPhase", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("Phase", Phase);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetDACBalance
* @method GetDACBalance
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDACConfig1.prototype.GetDACBalance = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetDACBalance", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Balance"] = ohnet.soaprequest.readIntParameter(result["Balance"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetDACBalance
* @method SetDACBalance
* @param {Int} Balance An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDACConfig1.prototype.SetDACBalance = function(Balance, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetDACBalance", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("Balance", Balance);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetWaitingTime
* @method GetWaitingTime
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDACConfig1.prototype.GetWaitingTime = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetWaitingTime", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["WaitingTime"] = ohnet.soaprequest.readStringParameter(result["WaitingTime"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetWaitingTime
* @method SetWaitingTime
* @param {String} WaitingTime An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgDACConfig1.prototype.SetWaitingTime = function(WaitingTime, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetWaitingTime", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("WaitingTime", WaitingTime);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



