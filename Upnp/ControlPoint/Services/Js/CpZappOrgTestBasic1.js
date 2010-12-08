 

/**
* Service Proxy for zapp.org:TestBasic:1
* @module Zapp
* @class TestBasic
*/

var ServiceTestBasic = function(udn){	

	this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/zapp.org-TestBasic-1/control";  // upnp control url
	this.domain = "zapp.org";
	if (this.domain == "upnp.org") {
		this.domain = "schemas.upnp.org";
    }
	this.domain = this.domain.replace(/\./,"-");
	this.type = "TestBasic";
	this.version = "1";
	this.serviceName = "zapp.org-TestBasic-1";
	this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
	this.udn = udn;   // device name
	
	// Collection of service properties
	this.serviceProperties = {};
	this.serviceProperties["A_ARG_Increment_Value"] = new Zapp.ServiceProperty("A_ARG_Increment_Value");
	this.serviceProperties["A_ARG_Increment_Result"] = new Zapp.ServiceProperty("A_ARG_Increment_Result");
	this.serviceProperties["A_ARG_Decrement_Value"] = new Zapp.ServiceProperty("A_ARG_Decrement_Value");
	this.serviceProperties["A_ARG_Decrement_Result"] = new Zapp.ServiceProperty("A_ARG_Decrement_Result");
	this.serviceProperties["A_ARG_Toggle_Value"] = new Zapp.ServiceProperty("A_ARG_Toggle_Value");
	this.serviceProperties["A_ARG_Toggle_Result"] = new Zapp.ServiceProperty("A_ARG_Toggle_Result");
	this.serviceProperties["A_ARG_EchoString_Value"] = new Zapp.ServiceProperty("A_ARG_EchoString_Value");
	this.serviceProperties["A_ARG_EchoString_Result"] = new Zapp.ServiceProperty("A_ARG_EchoString_Result");
	this.serviceProperties["A_ARG_EchoBinary_Value"] = new Zapp.ServiceProperty("A_ARG_EchoBinary_Value");
	this.serviceProperties["A_ARG_EchoBinary_Result"] = new Zapp.ServiceProperty("A_ARG_EchoBinary_Result");
	this.serviceProperties["VarUint"] = new Zapp.ServiceProperty("VarUint");
	this.serviceProperties["VarInt"] = new Zapp.ServiceProperty("VarInt");
	this.serviceProperties["VarBool"] = new Zapp.ServiceProperty("VarBool");
	this.serviceProperties["VarStr"] = new Zapp.ServiceProperty("VarStr");
	this.serviceProperties["VarBin"] = new Zapp.ServiceProperty("VarBin");
	this.serviceProperties["A_ARG_WriteData"] = new Zapp.ServiceProperty("A_ARG_WriteData");
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
ServiceTestBasic.prototype.subscribe = function (serviceAddedFunction) {
    Zapp.SubscriptionManager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
ServiceTestBasic.prototype.unsubscribe = function () {
    Zapp.SubscriptionManager.removeService(this.subscriptionId);
}




/**
* Adds a listener to handle "A_ARG_Increment_Value" property change events
* @method A_ARG_Increment_Value_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.A_ARG_Increment_Value_Changed = function (stateChangedFunction) {
    this.serviceProperties.A_ARG_Increment_Value.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readIntParameter(state)); 
	});
}


/**
* Adds a listener to handle "A_ARG_Increment_Result" property change events
* @method A_ARG_Increment_Result_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.A_ARG_Increment_Result_Changed = function (stateChangedFunction) {
    this.serviceProperties.A_ARG_Increment_Result.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readIntParameter(state)); 
	});
}


/**
* Adds a listener to handle "A_ARG_Decrement_Value" property change events
* @method A_ARG_Decrement_Value_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.A_ARG_Decrement_Value_Changed = function (stateChangedFunction) {
    this.serviceProperties.A_ARG_Decrement_Value.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readIntParameter(state)); 
	});
}


/**
* Adds a listener to handle "A_ARG_Decrement_Result" property change events
* @method A_ARG_Decrement_Result_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.A_ARG_Decrement_Result_Changed = function (stateChangedFunction) {
    this.serviceProperties.A_ARG_Decrement_Result.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readIntParameter(state)); 
	});
}


/**
* Adds a listener to handle "A_ARG_Toggle_Value" property change events
* @method A_ARG_Toggle_Value_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.A_ARG_Toggle_Value_Changed = function (stateChangedFunction) {
    this.serviceProperties.A_ARG_Toggle_Value.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readBoolParameter(state)); 
	});
}


/**
* Adds a listener to handle "A_ARG_Toggle_Result" property change events
* @method A_ARG_Toggle_Result_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.A_ARG_Toggle_Result_Changed = function (stateChangedFunction) {
    this.serviceProperties.A_ARG_Toggle_Result.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readBoolParameter(state)); 
	});
}


/**
* Adds a listener to handle "A_ARG_EchoString_Value" property change events
* @method A_ARG_EchoString_Value_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.A_ARG_EchoString_Value_Changed = function (stateChangedFunction) {
    this.serviceProperties.A_ARG_EchoString_Value.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readStringParameter(state)); 
	});
}


/**
* Adds a listener to handle "A_ARG_EchoString_Result" property change events
* @method A_ARG_EchoString_Result_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.A_ARG_EchoString_Result_Changed = function (stateChangedFunction) {
    this.serviceProperties.A_ARG_EchoString_Result.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readStringParameter(state)); 
	});
}


/**
* Adds a listener to handle "A_ARG_EchoBinary_Value" property change events
* @method A_ARG_EchoBinary_Value_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.A_ARG_EchoBinary_Value_Changed = function (stateChangedFunction) {
    this.serviceProperties.A_ARG_EchoBinary_Value.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readBinaryParameter(state)); 
	});
}


/**
* Adds a listener to handle "A_ARG_EchoBinary_Result" property change events
* @method A_ARG_EchoBinary_Result_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.A_ARG_EchoBinary_Result_Changed = function (stateChangedFunction) {
    this.serviceProperties.A_ARG_EchoBinary_Result.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readBinaryParameter(state)); 
	});
}


/**
* Adds a listener to handle "VarUint" property change events
* @method VarUint_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.VarUint_Changed = function (stateChangedFunction) {
    this.serviceProperties.VarUint.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readIntParameter(state)); 
	});
}


/**
* Adds a listener to handle "VarInt" property change events
* @method VarInt_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.VarInt_Changed = function (stateChangedFunction) {
    this.serviceProperties.VarInt.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readIntParameter(state)); 
	});
}


/**
* Adds a listener to handle "VarBool" property change events
* @method VarBool_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.VarBool_Changed = function (stateChangedFunction) {
    this.serviceProperties.VarBool.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readBoolParameter(state)); 
	});
}


/**
* Adds a listener to handle "VarStr" property change events
* @method VarStr_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.VarStr_Changed = function (stateChangedFunction) {
    this.serviceProperties.VarStr.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readStringParameter(state)); 
	});
}


/**
* Adds a listener to handle "VarBin" property change events
* @method VarBin_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.VarBin_Changed = function (stateChangedFunction) {
    this.serviceProperties.VarBin.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readBinaryParameter(state)); 
	});
}


/**
* Adds a listener to handle "A_ARG_WriteData" property change events
* @method A_ARG_WriteData_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
ServiceTestBasic.prototype.A_ARG_WriteData_Changed = function (stateChangedFunction) {
    this.serviceProperties.A_ARG_WriteData.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readStringParameter(state)); 
	});
}


/**
* A service action to Increment
* @method Increment
* @param {Int} Value An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.Increment = function(Value, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("Increment", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("Value", Value);
    request.send(function(result){
		result["Result"] = Zapp.SoapRequest.readIntParameter(result["Result"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to Decrement
* @method Decrement
* @param {Int} Value An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.Decrement = function(Value, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("Decrement", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("Value", Value);
    request.send(function(result){
		result["Result"] = Zapp.SoapRequest.readIntParameter(result["Result"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to Toggle
* @method Toggle
* @param {Boolean} Value An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.Toggle = function(Value, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("Toggle", this.url, this.domain, this.type, this.version);		
    request.writeBoolParameter("Value", Value);
    request.send(function(result){
		result["Result"] = Zapp.SoapRequest.readBoolParameter(result["Result"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to EchoString
* @method EchoString
* @param {String} Value An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.EchoString = function(Value, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("EchoString", this.url, this.domain, this.type, this.version);		
    request.writeStringParameter("Value", Value);
    request.send(function(result){
		result["Result"] = Zapp.SoapRequest.readStringParameter(result["Result"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to EchoBinary
* @method EchoBinary
* @param {String} Value An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.EchoBinary = function(Value, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("EchoBinary", this.url, this.domain, this.type, this.version);		
    request.writeBinaryParameter("Value", Value);
    request.send(function(result){
		result["Result"] = Zapp.SoapRequest.readBinaryParameter(result["Result"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to SetUint
* @method SetUint
* @param {Int} ValueUint An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.SetUint = function(ValueUint, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("SetUint", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("ValueUint", ValueUint);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to GetUint
* @method GetUint
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.GetUint = function(successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("GetUint", this.url, this.domain, this.type, this.version);		
    request.send(function(result){
		result["ValueUint"] = Zapp.SoapRequest.readIntParameter(result["ValueUint"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to SetInt
* @method SetInt
* @param {Int} ValueInt An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.SetInt = function(ValueInt, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("SetInt", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("ValueInt", ValueInt);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to GetInt
* @method GetInt
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.GetInt = function(successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("GetInt", this.url, this.domain, this.type, this.version);		
    request.send(function(result){
		result["ValueInt"] = Zapp.SoapRequest.readIntParameter(result["ValueInt"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to SetBool
* @method SetBool
* @param {Boolean} ValueBool An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.SetBool = function(ValueBool, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("SetBool", this.url, this.domain, this.type, this.version);		
    request.writeBoolParameter("ValueBool", ValueBool);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to GetBool
* @method GetBool
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.GetBool = function(successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("GetBool", this.url, this.domain, this.type, this.version);		
    request.send(function(result){
		result["ValueBool"] = Zapp.SoapRequest.readBoolParameter(result["ValueBool"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to SetMultiple
* @method SetMultiple
* @param {Int} ValueUint An action parameter
* @param {Int} ValueInt An action parameter
* @param {Boolean} ValueBool An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.SetMultiple = function(ValueUint, ValueInt, ValueBool, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("SetMultiple", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("ValueUint", ValueUint);
    request.writeIntParameter("ValueInt", ValueInt);
    request.writeBoolParameter("ValueBool", ValueBool);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to SetString
* @method SetString
* @param {String} ValueStr An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.SetString = function(ValueStr, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("SetString", this.url, this.domain, this.type, this.version);		
    request.writeStringParameter("ValueStr", ValueStr);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to GetString
* @method GetString
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.GetString = function(successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("GetString", this.url, this.domain, this.type, this.version);		
    request.send(function(result){
		result["ValueStr"] = Zapp.SoapRequest.readStringParameter(result["ValueStr"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to SetBinary
* @method SetBinary
* @param {String} ValueBin An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.SetBinary = function(ValueBin, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("SetBinary", this.url, this.domain, this.type, this.version);		
    request.writeBinaryParameter("ValueBin", ValueBin);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to GetBinary
* @method GetBinary
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.GetBinary = function(successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("GetBinary", this.url, this.domain, this.type, this.version);		
    request.send(function(result){
		result["ValueBin"] = Zapp.SoapRequest.readBinaryParameter(result["ValueBin"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to ToggleBool
* @method ToggleBool
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.ToggleBool = function(successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("ToggleBool", this.url, this.domain, this.type, this.version);		
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to WriteFile
* @method WriteFile
* @param {String} Data An action parameter
* @param {String} FileFullName An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.WriteFile = function(Data, FileFullName, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("WriteFile", this.url, this.domain, this.type, this.version);		
    request.writeStringParameter("Data", Data);
    request.writeStringParameter("FileFullName", FileFullName);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to Shutdown
* @method Shutdown
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
ServiceTestBasic.prototype.Shutdown = function(successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("Shutdown", this.url, this.domain, this.type, this.version);		
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


