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
#ifndef ROSCOMMON_MSGS_SHAPE_MSGS_SOLIDPRIMITIVE_DATA_H_
#define ROSCOMMON_MSGS_SHAPE_MSGS_SOLIDPRIMITIVE_DATA_H_


#include <vector>

namespace ROSCommon_msgsIDL 
{
	typedef std::vector<double> Shape_msgs_SolidPrimitive_dimensions_type;
	struct Shape_msgs_SolidPrimitive
	{
		unsigned char type;
		Shape_msgs_SolidPrimitive_dimensions_type dimensions;
  	};
};

#endif /* ROSCOMMON_MSGS_SHAPE_MSGS_SOLIDPRIMITIVE_DATA_H_ */