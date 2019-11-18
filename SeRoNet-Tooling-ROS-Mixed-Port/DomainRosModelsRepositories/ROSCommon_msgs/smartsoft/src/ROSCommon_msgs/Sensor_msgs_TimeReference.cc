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

#include "ROSCommon_msgs/Sensor_msgs_TimeReference.hh"

using namespace ROSCommon_msgs;

Sensor_msgs_TimeReference::Sensor_msgs_TimeReference()
:	Sensor_msgs_TimeReferenceCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Sensor_msgs_TimeReference::Sensor_msgs_TimeReference(const ROSRos_core::Std_msgs_Header &header, const CommBasicObjects::CommTimeStamp &time_ref, const std::string &source)
:	Sensor_msgs_TimeReferenceCore() // base constructor sets default values as defined in the model
{
	setHeader(header);
	setTime_ref(time_ref);
	setSource(source);
}
 */

Sensor_msgs_TimeReference::Sensor_msgs_TimeReference(const Sensor_msgs_TimeReferenceCore &sensor_msgs_TimeReference)
:	Sensor_msgs_TimeReferenceCore(sensor_msgs_TimeReference)
{  }

Sensor_msgs_TimeReference::Sensor_msgs_TimeReference(const DATATYPE &sensor_msgs_TimeReference)
:	Sensor_msgs_TimeReferenceCore(sensor_msgs_TimeReference)
{  }

Sensor_msgs_TimeReference::~Sensor_msgs_TimeReference()
{  }