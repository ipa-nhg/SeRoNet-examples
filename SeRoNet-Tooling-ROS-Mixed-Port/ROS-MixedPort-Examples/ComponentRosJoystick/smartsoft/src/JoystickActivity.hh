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
#ifndef _JOYSTICKACTIVITY_HH
#define _JOYSTICKACTIVITY_HH

#include "JoystickActivityCore.hh"

#include <mutex>
#include <sensor_msgs/Joy.h>

class JoystickActivity  : public JoystickActivityCore
{
private:
	std::mutex mtx;
	CommBasicObjects::CommJoystick comm_joy;
public:
	JoystickActivity(SmartACE::SmartComponent *comp);
	virtual ~JoystickActivity();
	
	void update_joystrick_msg(const sensor_msgs::Joy::ConstPtr &msg);

	virtual int on_entry();
	virtual int on_execute();
	virtual int on_exit();
};

#endif
