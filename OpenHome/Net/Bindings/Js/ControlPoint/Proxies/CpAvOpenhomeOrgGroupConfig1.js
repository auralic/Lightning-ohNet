 

/**
* Service Proxy for CpProxyAvOpenhomeOrgGroupConfig1
* @module ohnet
* @class GroupConfig
*/
    
var CpProxyAvOpenhomeOrgGroupConfig1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-GroupConfig-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "GroupConfig";
    this.version = "1";
    this.serviceName = "av.openhome.org-GroupConfig-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["GroupMode"] = new ohnet.serviceproperty("GroupMode","string");
    this.serviceProperties["GroupName"] = new ohnet.serviceproperty("GroupName","string");
    this.serviceProperties["GroupID"] = new ohnet.serviceproperty("GroupID","string");
    this.serviceProperties["GroupVolume"] = new ohnet.serviceproperty("GroupVolume","int");
    this.serviceProperties["GroupMute"] = new ohnet.serviceproperty("GroupMute","bool");
    this.serviceProperties["GroupStatus"] = new ohnet.serviceproperty("GroupStatus","string");
    this.serviceProperties["BitPerfectMode"] = new ohnet.serviceproperty("BitPerfectMode","bool");

            
    this.GroupModeAllowedValues = [];
    this.GroupModeAllowedValues.push("Master");
    this.GroupModeAllowedValues.push("Slave");
    this.GroupModeAllowedValues.push("None");
                                    
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "GroupMode" property change events
* @method GroupMode_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.GroupMode_Changed = function (stateChangedFunction) {
    this.serviceProperties.GroupMode.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "GroupName" property change events
* @method GroupName_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.GroupName_Changed = function (stateChangedFunction) {
    this.serviceProperties.GroupName.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "GroupID" property change events
* @method GroupID_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.GroupID_Changed = function (stateChangedFunction) {
    this.serviceProperties.GroupID.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "GroupVolume" property change events
* @method GroupVolume_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.GroupVolume_Changed = function (stateChangedFunction) {
    this.serviceProperties.GroupVolume.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "GroupMute" property change events
* @method GroupMute_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.GroupMute_Changed = function (stateChangedFunction) {
    this.serviceProperties.GroupMute.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "GroupStatus" property change events
* @method GroupStatus_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.GroupStatus_Changed = function (stateChangedFunction) {
    this.serviceProperties.GroupStatus.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "BitPerfectMode" property change events
* @method BitPerfectMode_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.BitPerfectMode_Changed = function (stateChangedFunction) {
    this.serviceProperties.BitPerfectMode.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}


/**
* A service action to SetGroupMode
* @method SetGroupMode
* @param {String} GroupMode An action parameter
* @param {String} GroupID An action parameter
* @param {String} GroupName An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.SetGroupMode = function(GroupMode, GroupID, GroupName, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetGroupMode", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("GroupMode", GroupMode);
    request.writeStringParameter("GroupID", GroupID);
    request.writeStringParameter("GroupName", GroupName);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetGroupMode
* @method GetGroupMode
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.GetGroupMode = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetGroupMode", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["GroupMode"] = ohnet.soaprequest.readStringParameter(result["GroupMode"]); 
        result["GroupID"] = ohnet.soaprequest.readStringParameter(result["GroupID"]); 
        result["GroupName"] = ohnet.soaprequest.readStringParameter(result["GroupName"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetGroupVolume
* @method SetGroupVolume
* @param {Int} GroupVolume An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.SetGroupVolume = function(GroupVolume, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetGroupVolume", this.url, this.domain, this.type, this.version);     
    request.writeIntParameter("GroupVolume", GroupVolume);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetGroupVolume
* @method GetGroupVolume
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.GetGroupVolume = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetGroupVolume", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["GroupVolume"] = ohnet.soaprequest.readIntParameter(result["GroupVolume"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetGroupMute
* @method SetGroupMute
* @param {Boolean} GroupMute An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.SetGroupMute = function(GroupMute, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetGroupMute", this.url, this.domain, this.type, this.version);     
    request.writeBoolParameter("GroupMute", GroupMute);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetGroupMute
* @method GetGroupMute
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.GetGroupMute = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetGroupMute", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["GroupMute"] = ohnet.soaprequest.readBoolParameter(result["GroupMute"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetGroupStatus
* @method GetGroupStatus
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.GetGroupStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetGroupStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["GroupStatus"] = ohnet.soaprequest.readStringParameter(result["GroupStatus"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetGroupStatus
* @method SetGroupStatus
* @param {String} GroupStatus An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.SetGroupStatus = function(GroupStatus, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetGroupStatus", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("GroupStatus", GroupStatus);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetBitPerfectMode
* @method GetBitPerfectMode
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.GetBitPerfectMode = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetBitPerfectMode", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["BitPerfectMode"] = ohnet.soaprequest.readBoolParameter(result["BitPerfectMode"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetBitPerfectMode
* @method SetBitPerfectMode
* @param {Boolean} BitPerfectMode An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgGroupConfig1.prototype.SetBitPerfectMode = function(BitPerfectMode, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetBitPerfectMode", this.url, this.domain, this.type, this.version);     
    request.writeBoolParameter("BitPerfectMode", BitPerfectMode);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



