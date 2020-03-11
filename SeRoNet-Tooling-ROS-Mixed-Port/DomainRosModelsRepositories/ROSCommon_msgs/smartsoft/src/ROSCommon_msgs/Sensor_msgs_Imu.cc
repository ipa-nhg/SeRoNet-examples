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

#include "ROSCommon_msgs/Sensor_msgs_Imu.hh"

using namespace ROSCommon_msgs;

Sensor_msgs_Imu::Sensor_msgs_Imu()
:	Sensor_msgs_ImuCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
Sensor_msgs_Imu::Sensor_msgs_Imu(const ROSRos_core::Std_msgs_Header &header, const ROSCommon_msgs::Geometry_msgs_Quaternion &orientation, const std::vector<double> &orientation_covariance, const ROSCommon_msgs::Geometry_msgs_Vector3 &angular_velocity, const std::vector<double> &angular_velocity_covariance, const ROSCommon_msgs::Geometry_msgs_Vector3 &linear_acceleration, const std::vector<double> &linear_acceleration_covariance)
:	Sensor_msgs_ImuCore() // base constructor sets default values as defined in the model
{
	setHeader(header);
	setOrientation(orientation);
	setOrientation_covariance(orientation_covariance);
	setAngular_velocity(angular_velocity);
	setAngular_velocity_covariance(angular_velocity_covariance);
	setLinear_acceleration(linear_acceleration);
	setLinear_acceleration_covariance(linear_acceleration_covariance);
}
 */

Sensor_msgs_Imu::Sensor_msgs_Imu(const Sensor_msgs_ImuCore &sensor_msgs_Imu)
:	Sensor_msgs_ImuCore(sensor_msgs_Imu)
{  }

Sensor_msgs_Imu::Sensor_msgs_Imu(const DATATYPE &sensor_msgs_Imu)
:	Sensor_msgs_ImuCore(sensor_msgs_Imu)
{  }

Sensor_msgs_Imu::~Sensor_msgs_Imu()
{  }