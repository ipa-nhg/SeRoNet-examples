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
#include "ROSCommon_msgs/Visualization_msgs_InteractiveMarkerUpdateACE.hh"
#include <ace/SString.h>
#include "ROSCommon_msgs/Visualization_msgs_InteractiveMarkerACE.hh"
#include "ROSCommon_msgs/Visualization_msgs_InteractiveMarkerPoseACE.hh"

// serialization operator for element Visualization_msgs_InteractiveMarkerUpdate
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgsIDL::Visualization_msgs_InteractiveMarkerUpdate &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element server_id
	good_bit = good_bit && cdr << ACE_CString(data.server_id.c_str());
	// serialize list-element seq_num
	good_bit = good_bit && cdr.write_ulonglong(data.seq_num);
	// serialize list-element type
	good_bit = good_bit && cdr.write_octet(data.type);
	// serialize list-element markers
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.markers.size());
	std::vector<ROSCommon_msgsIDL::Visualization_msgs_InteractiveMarker>::const_iterator data_markersIt;
	for(data_markersIt=data.markers.begin(); data_markersIt!=data.markers.end(); data_markersIt++) {
		good_bit = good_bit && cdr << *data_markersIt;
	}
	// serialize list-element poses
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.poses.size());
	std::vector<ROSCommon_msgsIDL::Visualization_msgs_InteractiveMarkerPose>::const_iterator data_posesIt;
	for(data_posesIt=data.poses.begin(); data_posesIt!=data.poses.end(); data_posesIt++) {
		good_bit = good_bit && cdr << *data_posesIt;
	}
	// serialize list-element erases
	good_bit = good_bit && cdr << ACE_Utils::truncate_cast<ACE_CDR::ULong>(data.erases.size());
	std::vector<std::string>::const_iterator data_erasesIt;
	for(data_erasesIt=data.erases.begin(); data_erasesIt!=data.erases.end(); data_erasesIt++) {
		good_bit = good_bit && cdr << ACE_CString(data_erasesIt->c_str());
	}
	
	return good_bit;
}

// de-serialization operator for element Visualization_msgs_InteractiveMarkerUpdate
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgsIDL::Visualization_msgs_InteractiveMarkerUpdate &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize string-type element server_id
	ACE_CString data_server_id_str;
	good_bit = good_bit && cdr >> data_server_id_str;
	data.server_id = data_server_id_str.c_str();
	// deserialize string-type element seq_num
	ACE_CDR::ULongLong data_seq_num_ll;
	good_bit = good_bit && cdr.read_ulonglong(data_seq_num_ll);
	data.seq_num = data_seq_num_ll;
	// deserialize type element type
	good_bit = good_bit && cdr.read_octet(data.type);
	// deserialize list-type element markers
	ACE_CDR::ULong data_markersNbr;
	good_bit = good_bit && cdr >> data_markersNbr;
	data.markers.clear();
	ROSCommon_msgsIDL::Visualization_msgs_InteractiveMarker data_markersItem;
	for(ACE_CDR::ULong i=0; i<data_markersNbr; ++i) {
		good_bit = good_bit && cdr >> data_markersItem;
		data.markers.push_back(data_markersItem);
	}
	// deserialize list-type element poses
	ACE_CDR::ULong data_posesNbr;
	good_bit = good_bit && cdr >> data_posesNbr;
	data.poses.clear();
	ROSCommon_msgsIDL::Visualization_msgs_InteractiveMarkerPose data_posesItem;
	for(ACE_CDR::ULong i=0; i<data_posesNbr; ++i) {
		good_bit = good_bit && cdr >> data_posesItem;
		data.poses.push_back(data_posesItem);
	}
	// deserialize list-type element erases
	ACE_CDR::ULong data_erasesNbr;
	good_bit = good_bit && cdr >> data_erasesNbr;
	data.erases.clear();
	std::string data_erasesItem;
	for(ACE_CDR::ULong i=0; i<data_erasesNbr; ++i) {
		good_bit = good_bit && cdr >> data_erasesItem;
		data.erases.push_back(data_erasesItem);
	}
	
	return good_bit;
}

// serialization operator for CommunicationObject Visualization_msgs_InteractiveMarkerUpdate
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const ROSCommon_msgs::Visualization_msgs_InteractiveMarkerUpdate &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Visualization_msgs_InteractiveMarkerUpdate
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, ROSCommon_msgs::Visualization_msgs_InteractiveMarkerUpdate &obj)
{
	return cdr >> obj.set();
}