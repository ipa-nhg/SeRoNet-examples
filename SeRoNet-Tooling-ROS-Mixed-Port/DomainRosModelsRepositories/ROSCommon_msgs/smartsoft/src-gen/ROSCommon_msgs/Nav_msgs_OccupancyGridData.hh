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
#ifndef ROSCOMMON_MSGS_NAV_MSGS_OCCUPANCYGRID_DATA_H_
#define ROSCOMMON_MSGS_NAV_MSGS_OCCUPANCYGRID_DATA_H_

#include "ROSRos_core/Std_msgs_HeaderData.hh"
#include "ROSCommon_msgs/Nav_msgs_MapMetaDataData.hh"

#include <vector>

namespace ROSCommon_msgsIDL 
{
	typedef std::vector<char> Nav_msgs_OccupancyGrid_data_type;
	struct Nav_msgs_OccupancyGrid
	{
		ROSRos_coreIDL::Std_msgs_Header header;
		ROSCommon_msgsIDL::Nav_msgs_MapMetaData info;
		Nav_msgs_OccupancyGrid_data_type data;
  	};
};

#endif /* ROSCOMMON_MSGS_NAV_MSGS_OCCUPANCYGRID_DATA_H_ */