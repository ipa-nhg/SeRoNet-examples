//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#ifndef ROSROS_CORE_STD_SRVS_TRIGGERRESPONSE_CORE_H_
#define ROSROS_CORE_STD_SRVS_TRIGGERRESPONSE_CORE_H_

#include "ROSRos_core/Std_srvs_TriggerResponseData.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSRos_core {
	
class Std_srvs_TriggerResponseCore {
protected:
	// data structure
	ROSRos_coreIDL::Std_srvs_TriggerResponse idl_Std_srvs_TriggerResponse;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSRos_coreIDL::Std_srvs_TriggerResponse DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Std_srvs_TriggerResponseCore();
	Std_srvs_TriggerResponseCore(const DATATYPE &data);
	// default destructor
	virtual ~Std_srvs_TriggerResponseCore();
	
	const DATATYPE& get() const { return idl_Std_srvs_TriggerResponse; }
	operator const DATATYPE&() const { return idl_Std_srvs_TriggerResponse; }
	DATATYPE& set() { return idl_Std_srvs_TriggerResponse; }

	static inline std::string identifier(void) { return "ROSRos_core::Std_srvs_TriggerResponse"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Success
	inline bool getSuccess() const { return idl_Std_srvs_TriggerResponse.success; }
	inline Std_srvs_TriggerResponseCore& setSuccess(const bool &success) { idl_Std_srvs_TriggerResponse.success = success; return *this; }
	
	// getter and setter for element Message
	inline std::string getMessage() const { return idl_Std_srvs_TriggerResponse.message; }
	inline Std_srvs_TriggerResponseCore& setMessage(const std::string &message) { idl_Std_srvs_TriggerResponse.message = message; return *this; }
};

} /* namespace ROSRos_core */
#endif /* ROSROS_CORE_STD_SRVS_TRIGGERRESPONSE_CORE_H_ */