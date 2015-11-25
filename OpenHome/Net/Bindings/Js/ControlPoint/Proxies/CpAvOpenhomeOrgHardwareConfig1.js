 

/**
* Service Proxy for CpProxyAvOpenhomeOrgHardwareConfig1
* @module ohnet
* @class HardwareConfig
*/
    
var CpProxyAvOpenhomeOrgHardwareConfig1 = function(udn){ 

    this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/av.openhome.org-HardwareConfig-1/control";  // upnp control url
    this.domain = "av-openhome-org";
    this.type = "HardwareConfig";
    this.version = "1";
    this.serviceName = "av.openhome.org-HardwareConfig-1";
    this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
    this.udn = udn;   // device name
    
    // Collection of service properties
    this.serviceProperties = {};
    this.serviceProperties["Alive"] = new ohnet.serviceproperty("Alive","bool");
    this.serviceProperties["CurrentAction"] = new ohnet.serviceproperty("CurrentAction","int");
    this.serviceProperties["Restart"] = new ohnet.serviceproperty("Restart","bool");
    this.serviceProperties["Number"] = new ohnet.serviceproperty("Number","int");
    this.serviceProperties["RoomName"] = new ohnet.serviceproperty("RoomName","string");
    this.serviceProperties["InterFace"] = new ohnet.serviceproperty("InterFace","string");
    this.serviceProperties["NetMask"] = new ohnet.serviceproperty("NetMask","string");
    this.serviceProperties["GateWay"] = new ohnet.serviceproperty("GateWay","string");
    this.serviceProperties["DNS"] = new ohnet.serviceproperty("DNS","string");
    this.serviceProperties["DHCP"] = new ohnet.serviceproperty("DHCP","string");
    this.serviceProperties["Ssid"] = new ohnet.serviceproperty("Ssid","string");
    this.serviceProperties["PassWord"] = new ohnet.serviceproperty("PassWord","string");
    this.serviceProperties["EncrypType"] = new ohnet.serviceproperty("EncrypType","string");
    this.serviceProperties["Channel"] = new ohnet.serviceproperty("Channel","string");
    this.serviceProperties["UpnpType"] = new ohnet.serviceproperty("UpnpType","string");
    this.serviceProperties["Status"] = new ohnet.serviceproperty("Status","string");
    this.serviceProperties["SampleFormat"] = new ohnet.serviceproperty("SampleFormat","string");
    this.serviceProperties["IpAddress"] = new ohnet.serviceproperty("IpAddress","string");
    this.serviceProperties["Protect"] = new ohnet.serviceproperty("Protect","string");
    this.serviceProperties["ProtectPassword"] = new ohnet.serviceproperty("ProtectPassword","string");
    this.serviceProperties["ActiveStatus"] = new ohnet.serviceproperty("ActiveStatus","string");
    this.serviceProperties["Time"] = new ohnet.serviceproperty("Time","string");
    this.serviceProperties["VolumeControl"] = new ohnet.serviceproperty("VolumeControl","bool");

                                                                                                                                              
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.subscribe = function (serviceAddedFunction) {
    ohnet.subscriptionmanager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.unsubscribe = function () {
    ohnet.subscriptionmanager.removeService(this.subscriptionId);
}


    

/**
* Adds a listener to handle "Alive" property change events
* @method Alive_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.Alive_Changed = function (stateChangedFunction) {
    this.serviceProperties.Alive.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "CurrentAction" property change events
* @method CurrentAction_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.CurrentAction_Changed = function (stateChangedFunction) {
    this.serviceProperties.CurrentAction.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Restart" property change events
* @method Restart_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.Restart_Changed = function (stateChangedFunction) {
    this.serviceProperties.Restart.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Number" property change events
* @method Number_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.Number_Changed = function (stateChangedFunction) {
    this.serviceProperties.Number.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readIntParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "RoomName" property change events
* @method RoomName_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.RoomName_Changed = function (stateChangedFunction) {
    this.serviceProperties.RoomName.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "InterFace" property change events
* @method InterFace_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.InterFace_Changed = function (stateChangedFunction) {
    this.serviceProperties.InterFace.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "NetMask" property change events
* @method NetMask_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.NetMask_Changed = function (stateChangedFunction) {
    this.serviceProperties.NetMask.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "GateWay" property change events
* @method GateWay_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GateWay_Changed = function (stateChangedFunction) {
    this.serviceProperties.GateWay.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "DNS" property change events
* @method DNS_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.DNS_Changed = function (stateChangedFunction) {
    this.serviceProperties.DNS.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "DHCP" property change events
* @method DHCP_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.DHCP_Changed = function (stateChangedFunction) {
    this.serviceProperties.DHCP.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Ssid" property change events
* @method Ssid_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.Ssid_Changed = function (stateChangedFunction) {
    this.serviceProperties.Ssid.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "PassWord" property change events
* @method PassWord_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.PassWord_Changed = function (stateChangedFunction) {
    this.serviceProperties.PassWord.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "EncrypType" property change events
* @method EncrypType_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.EncrypType_Changed = function (stateChangedFunction) {
    this.serviceProperties.EncrypType.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Channel" property change events
* @method Channel_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.Channel_Changed = function (stateChangedFunction) {
    this.serviceProperties.Channel.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "UpnpType" property change events
* @method UpnpType_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.UpnpType_Changed = function (stateChangedFunction) {
    this.serviceProperties.UpnpType.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Status" property change events
* @method Status_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.Status_Changed = function (stateChangedFunction) {
    this.serviceProperties.Status.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "SampleFormat" property change events
* @method SampleFormat_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SampleFormat_Changed = function (stateChangedFunction) {
    this.serviceProperties.SampleFormat.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "IpAddress" property change events
* @method IpAddress_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.IpAddress_Changed = function (stateChangedFunction) {
    this.serviceProperties.IpAddress.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Protect" property change events
* @method Protect_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.Protect_Changed = function (stateChangedFunction) {
    this.serviceProperties.Protect.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "ProtectPassword" property change events
* @method ProtectPassword_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.ProtectPassword_Changed = function (stateChangedFunction) {
    this.serviceProperties.ProtectPassword.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "ActiveStatus" property change events
* @method ActiveStatus_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.ActiveStatus_Changed = function (stateChangedFunction) {
    this.serviceProperties.ActiveStatus.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "Time" property change events
* @method Time_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.Time_Changed = function (stateChangedFunction) {
    this.serviceProperties.Time.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readStringParameter(state)); 
    });
}
    

/**
* Adds a listener to handle "VolumeControl" property change events
* @method VolumeControl_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.VolumeControl_Changed = function (stateChangedFunction) {
    this.serviceProperties.VolumeControl.addListener(function (state) 
    { 
        stateChangedFunction(ohnet.soaprequest.readBoolParameter(state)); 
    });
}


/**
* A service action to IsAlive
* @method IsAlive
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.IsAlive = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("IsAlive", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Alive"] = ohnet.soaprequest.readBoolParameter(result["Alive"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Update
* @method Update
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.Update = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Update", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to Active
* @method Active
* @param {Boolean} IsSubscribe An action parameter
* @param {String} RealName An action parameter
* @param {String} Email An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.Active = function(IsSubscribe, RealName, Email, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("Active", this.url, this.domain, this.type, this.version);     
    request.writeBoolParameter("IsSubscribe", IsSubscribe);
    request.writeStringParameter("RealName", RealName);
    request.writeStringParameter("Email", Email);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetActiveStatus
* @method GetActiveStatus
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetActiveStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetActiveStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["ActiveStatus"] = ohnet.soaprequest.readStringParameter(result["ActiveStatus"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to CheckUpdate
* @method CheckUpdate
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.CheckUpdate = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("CheckUpdate", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to ResetDisplay
* @method ResetDisplay
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.ResetDisplay = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("ResetDisplay", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetHardWareInfo
* @method GetHardWareInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetHardWareInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetHardWareInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["HardWareInfo"] = ohnet.soaprequest.readStringParameter(result["HardWareInfo"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetRoomName
* @method SetRoomName
* @param {String} RoomName An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetRoomName = function(RoomName, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetRoomName", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("RoomName", RoomName);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetVolumeControl
* @method GetVolumeControl
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetVolumeControl = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetVolumeControl", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["VolumeControl"] = ohnet.soaprequest.readBoolParameter(result["VolumeControl"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetVolumeControl
* @method SetVolumeControl
* @param {Boolean} VolumeControl An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetVolumeControl = function(VolumeControl, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetVolumeControl", this.url, this.domain, this.type, this.version);     
    request.writeBoolParameter("VolumeControl", VolumeControl);
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
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetWaitingTime = function(successFunction, errorFunction){ 
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
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetWaitingTime = function(WaitingTime, successFunction, errorFunction){ 
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


/**
* A service action to GetOutChannel
* @method GetOutChannel
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetOutChannel = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetOutChannel", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["ChannelNum"] = ohnet.soaprequest.readIntParameter(result["ChannelNum"]); 
        result["CurrentChannel"] = ohnet.soaprequest.readStringParameter(result["CurrentChannel"]); 
        result["OutChannel"] = ohnet.soaprequest.readStringParameter(result["OutChannel"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetOutChannel
* @method SetOutChannel
* @param {String} Channel An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetOutChannel = function(Channel, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetOutChannel", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Channel", Channel);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetUpnpType
* @method SetUpnpType
* @param {String} UpnpType An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetUpnpType = function(UpnpType, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetUpnpType", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("UpnpType", UpnpType);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetUpnpType
* @method GetUpnpType
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetUpnpType = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetUpnpType", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["UpnpType"] = ohnet.soaprequest.readStringParameter(result["UpnpType"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetDsdNativeStatus
* @method SetDsdNativeStatus
* @param {String} Status An action parameter
* @param {String} SampleFormat An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetDsdNativeStatus = function(Status, SampleFormat, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetDsdNativeStatus", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Status", Status);
    request.writeStringParameter("SampleFormat", SampleFormat);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetDsdNativeStatus
* @method GetDsdNativeStatus
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetDsdNativeStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetDsdNativeStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Status"] = ohnet.soaprequest.readStringParameter(result["Status"]); 
        result["SampleFormat"] = ohnet.soaprequest.readStringParameter(result["SampleFormat"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetPasswordProtect
* @method SetPasswordProtect
* @param {String} Protect An action parameter
* @param {String} ProtectPassword An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetPasswordProtect = function(Protect, ProtectPassword, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetPasswordProtect", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("Protect", Protect);
    request.writeStringParameter("ProtectPassword", ProtectPassword);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetPasswordProtect
* @method GetPasswordProtect
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetPasswordProtect = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetPasswordProtect", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Protect"] = ohnet.soaprequest.readStringParameter(result["Protect"]); 
        result["ProtectPassword"] = ohnet.soaprequest.readStringParameter(result["ProtectPassword"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetUpdateInfo
* @method GetUpdateInfo
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetUpdateInfo = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetUpdateInfo", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["Version"] = ohnet.soaprequest.readStringParameter(result["Version"]); 
        result["Progress"] = ohnet.soaprequest.readStringParameter(result["Progress"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetWirelessList
* @method GetWirelessList
* @param {String} InterFace An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetWirelessList = function(InterFace, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetWirelessList", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("InterFace", InterFace);
    request.send(function(result){
        result["Number"] = ohnet.soaprequest.readIntParameter(result["Number"]); 
        result["CurrentUse"] = ohnet.soaprequest.readStringParameter(result["CurrentUse"]); 
        result["WirelessList"] = ohnet.soaprequest.readStringParameter(result["WirelessList"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetIpAddress
* @method GetIpAddress
* @param {String} InterFace An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetIpAddress = function(InterFace, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetIpAddress", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("InterFace", InterFace);
    request.send(function(result){
        result["IpAddress"] = ohnet.soaprequest.readStringParameter(result["IpAddress"]); 
        result["NetMask"] = ohnet.soaprequest.readStringParameter(result["NetMask"]); 
        result["GateWay"] = ohnet.soaprequest.readStringParameter(result["GateWay"]); 
        result["DNS"] = ohnet.soaprequest.readStringParameter(result["DNS"]); 
        result["DHCP"] = ohnet.soaprequest.readStringParameter(result["DHCP"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetNetWork
* @method SetNetWork
* @param {String} InterFace An action parameter
* @param {String} IpAddress An action parameter
* @param {String} NetMask An action parameter
* @param {String} GateWay An action parameter
* @param {String} DNS An action parameter
* @param {String} Ssid An action parameter
* @param {String} PassWord An action parameter
* @param {String} EncrypType An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetNetWork = function(InterFace, IpAddress, NetMask, GateWay, DNS, Ssid, PassWord, EncrypType, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetNetWork", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("InterFace", InterFace);
    request.writeStringParameter("IpAddress", IpAddress);
    request.writeStringParameter("NetMask", NetMask);
    request.writeStringParameter("GateWay", GateWay);
    request.writeStringParameter("DNS", DNS);
    request.writeStringParameter("Ssid", Ssid);
    request.writeStringParameter("PassWord", PassWord);
    request.writeStringParameter("EncrypType", EncrypType);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetNetInterface
* @method GetNetInterface
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetNetInterface = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetNetInterface", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["InterfaceNum"] = ohnet.soaprequest.readIntParameter(result["InterfaceNum"]); 
        result["CurrentUse"] = ohnet.soaprequest.readStringParameter(result["CurrentUse"]); 
        result["InterfaceList"] = ohnet.soaprequest.readStringParameter(result["InterfaceList"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetHaltStatus
* @method GetHaltStatus
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetHaltStatus = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetHaltStatus", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["HaltStatus"] = ohnet.soaprequest.readBoolParameter(result["HaltStatus"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetHaltStatus
* @method SetHaltStatus
* @param {Boolean} HaltStatus An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetHaltStatus = function(HaltStatus, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetHaltStatus", this.url, this.domain, this.type, this.version);     
    request.writeBoolParameter("HaltStatus", HaltStatus);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetFilterMode
* @method GetFilterMode
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetFilterMode = function(successFunction, errorFunction){ 
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
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetFilterMode = function(FilterMode, successFunction, errorFunction){ 
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
* A service action to SetSourceVisible
* @method SetSourceVisible
* @param {String} SourceName An action parameter
* @param {Boolean} Visible An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetSourceVisible = function(SourceName, Visible, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetSourceVisible", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("SourceName", SourceName);
    request.writeBoolParameter("Visible", Visible);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetSourceVisible
* @method GetSourceVisible
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetSourceVisible = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetSourceVisible", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["VisibleInfo"] = ohnet.soaprequest.readStringParameter(result["VisibleInfo"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetLEDMode
* @method SetLEDMode
* @param {String} LEDMode An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetLEDMode = function(LEDMode, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetLEDMode", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("LEDMode", LEDMode);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetLEDMode
* @method GetLEDMode
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetLEDMode = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetLEDMode", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["LEDMode"] = ohnet.soaprequest.readStringParameter(result["LEDMode"]); 
        result["LEDModeList"] = ohnet.soaprequest.readStringParameter(result["LEDModeList"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to SetKeyMode
* @method SetKeyMode
* @param {String} KeyName An action parameter
* @param {String} KeyMode An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.SetKeyMode = function(KeyName, KeyMode, successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("SetKeyMode", this.url, this.domain, this.type, this.version);     
    request.writeStringParameter("KeyName", KeyName);
    request.writeStringParameter("KeyMode", KeyMode);
    request.send(function(result){
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}


/**
* A service action to GetKeyMode
* @method GetKeyMode
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxyAvOpenhomeOrgHardwareConfig1.prototype.GetKeyMode = function(successFunction, errorFunction){ 
    var request = new ohnet.soaprequest("GetKeyMode", this.url, this.domain, this.type, this.version);     
    request.send(function(result){
        result["SideKeyMode"] = ohnet.soaprequest.readStringParameter(result["SideKeyMode"]); 
        result["MiddleKeyMode"] = ohnet.soaprequest.readStringParameter(result["MiddleKeyMode"]); 
        result["KeyModeList"] = ohnet.soaprequest.readStringParameter(result["KeyModeList"]); 
    
        if (successFunction){
            successFunction(result);
        }
    }, function(message, transport) {
        if (errorFunction) {errorFunction(message, transport);}
    });
}



