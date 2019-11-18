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
#include "ROSCommon_msgs/Actionlib_msgs_GoalStatusCore.hh"

// serialization/deserialization operators
//#include "ROSCommon_msgs/Actionlib_msgs_GoalStatusACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace ROSCommon_msgs 
{
	const char* Actionlib_msgs_GoalStatusCore::getCompiledHash()
	{
		return ROSCommon_msgsIDL::REPO_HASH;
	}
	
	void Actionlib_msgs_GoalStatusCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for ROSCommon_msgs::Actionlib_msgs_GoalID(idl_Actionlib_msgs_GoalStatus.goal_id)
		ROSCommon_msgs::Actionlib_msgs_GoalID::getAllHashValues(hashes);
	}
	
	void Actionlib_msgs_GoalStatusCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "Actionlib_msgs_GoalStatusCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for ROSCommon_msgs::Actionlib_msgs_GoalID(idl_Actionlib_msgs_GoalStatus.goal_id)
		ROSCommon_msgs::Actionlib_msgs_GoalID::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t Actionlib_msgs_GoalStatusCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		seed += ROSCommon_msgs::Actionlib_msgs_GoalID::generateDataHash(data.goal_id);
		boost::hash_combine(seed, data.status);
		boost::hash_combine(seed, std::string(data.text.c_str()));
		
		return seed;
	}
	#endif
	
	// default constructor
	Actionlib_msgs_GoalStatusCore::Actionlib_msgs_GoalStatusCore()
	:	idl_Actionlib_msgs_GoalStatus()
	{  
		setGoal_id(ROSCommon_msgs::Actionlib_msgs_GoalID());
		setStatus(0);
		setText("");
	}
	
	Actionlib_msgs_GoalStatusCore::Actionlib_msgs_GoalStatusCore(const DATATYPE &data)
	:	idl_Actionlib_msgs_GoalStatus(data)
	{  }

	Actionlib_msgs_GoalStatusCore::~Actionlib_msgs_GoalStatusCore()
	{  }
	
	void Actionlib_msgs_GoalStatusCore::to_ostream(std::ostream &os) const
	{
	  os << "Actionlib_msgs_GoalStatus(";
	  getGoal_id().to_ostream(os);
	  os << getStatus() << " ";
	  os << getText() << " ";
	  os << ") ";
	}
	
	// convert to xml stream
	void Actionlib_msgs_GoalStatusCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<goal_id>";
		getGoal_id().to_xml(os, indent);
		os << indent << "</goal_id>";
		os << indent << "<status>" << getStatus() << "</status>";
		os << indent << "<text>" << getText() << "</text>";
	}
	
	// restore from xml stream
	void Actionlib_msgs_GoalStatusCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_goal_id("<goal_id>");
		static const Smart::KnuthMorrisPratt kmp_status("<status>");
		static const Smart::KnuthMorrisPratt kmp_text("<text>");
		
		if(kmp_goal_id.search(is)) {
			ROSCommon_msgs::Actionlib_msgs_GoalID goal_idItem;
			goal_idItem.from_xml(is);
			setGoal_id(goal_idItem);
		}
		if(kmp_status.search(is)) {
			unsigned char statusItem;
			is >> statusItem;
			setStatus(statusItem);
		}
		if(kmp_text.search(is)) {
			std::string textItem;
			is >> textItem;
			setText(textItem);
		}
	}
	
	/*
	void Actionlib_msgs_GoalStatusCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		ROSCommon_msgsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(ROSCommon_msgsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see Actionlib_msgs_GoalStatusACE.hh)
		cdr << idl_Actionlib_msgs_GoalStatus;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_Actionlib_msgs_GoalStatus);
		cdr << data_hash;
		// std::cout << "Actionlib_msgs_GoalStatusCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void Actionlib_msgs_GoalStatusCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		ROSCommon_msgsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see Actionlib_msgs_GoalStatusACE.hh)
		cdr >> idl_Actionlib_msgs_GoalStatus;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_Actionlib_msgs_GoalStatus);
		assert(data_hash == own_hash);
		// std::cout << "Actionlib_msgs_GoalStatusCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace ROSCommon_msgs */