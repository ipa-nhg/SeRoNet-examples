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
#ifndef ROSCOMMON_MSGS_NAV_MSGS_GETMAPGOAL_CORE_H_
#define ROSCOMMON_MSGS_NAV_MSGS_GETMAPGOAL_CORE_H_

#include "ROSCommon_msgs/Nav_msgs_GetMapGoalData.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Nav_msgs_GetMapGoalCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Nav_msgs_GetMapGoal idl_Nav_msgs_GetMapGoal;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Nav_msgs_GetMapGoal DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Nav_msgs_GetMapGoalCore();
	Nav_msgs_GetMapGoalCore(const DATATYPE &data);
	// default destructor
	virtual ~Nav_msgs_GetMapGoalCore();
	
	const DATATYPE& get() const { return idl_Nav_msgs_GetMapGoal; }
	operator const DATATYPE&() const { return idl_Nav_msgs_GetMapGoal; }
	DATATYPE& set() { return idl_Nav_msgs_GetMapGoal; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Nav_msgs_GetMapGoal"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_NAV_MSGS_GETMAPGOAL_CORE_H_ */