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

#ifndef COMPONENTROSJOY_NODE_PORTFACTORYINTERFACE_HH_
#define COMPONENTROSJOY_NODE_PORTFACTORYINTERFACE_HH_

// include communication objects
#include <ROSCommon_msgs/Sensor_msgs_Joy.hh>
#include <ROSCommon_msgs/Sensor_msgs_JoyACE.hh>

#include <chrono>

// include component's main class
#include "ComponentRosjoy_node.hh"

// forward declaration
class ComponentRosjoy_node;

class ComponentRosjoy_nodePortFactoryInterface {
public:
	ComponentRosjoy_nodePortFactoryInterface() { };
	virtual ~ComponentRosjoy_nodePortFactoryInterface() { };

	virtual void initialize(ComponentRosjoy_node *component, int argc, char* argv[]) = 0;
	virtual int onStartup() = 0;

	
	virtual Smart::IPushServerPattern<ROSCommon_msgs::Sensor_msgs_Joy> * createJoyOut(const std::string &serviceName) = 0;

	virtual int onShutdown(const std::chrono::steady_clock::duration &timeoutTime=std::chrono::seconds(2)) = 0;
	virtual void destroy() = 0;
};

#endif /* COMPONENTROSJOY_NODE_PORTFACTORYINTERFACE_HH_ */