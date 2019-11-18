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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef ROSCOMMON_MSGS_ACTIONLIB_MSGS_GOALSTATUS_H_
#define ROSCOMMON_MSGS_ACTIONLIB_MSGS_GOALSTATUS_H_

#include "ROSCommon_msgs/Actionlib_msgs_GoalStatusCore.hh"

namespace ROSCommon_msgs {
		
class Actionlib_msgs_GoalStatus : public Actionlib_msgs_GoalStatusCore {
	public:
		// default constructors
		Actionlib_msgs_GoalStatus();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Actionlib_msgs_GoalStatus(const ROSCommon_msgs::Actionlib_msgs_GoalID &goal_id, const unsigned char &status, const std::string &text);
		
		Actionlib_msgs_GoalStatus(const Actionlib_msgs_GoalStatusCore &actionlib_msgs_GoalStatus);
		Actionlib_msgs_GoalStatus(const DATATYPE &actionlib_msgs_GoalStatus);
		virtual ~Actionlib_msgs_GoalStatus();
		
		// use framework specific getter and setter methods from core (base) class
		using Actionlib_msgs_GoalStatusCore::get;
		using Actionlib_msgs_GoalStatusCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Actionlib_msgs_GoalStatus &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_ACTIONLIB_MSGS_GOALSTATUS_H_ */