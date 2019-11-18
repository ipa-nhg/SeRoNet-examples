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
#ifndef ROSCOMMON_MSGS_VISUALIZATION_MSGS_MARKERARRAY_CORE_H_
#define ROSCOMMON_MSGS_VISUALIZATION_MSGS_MARKERARRAY_CORE_H_

#include "ROSCommon_msgs/Visualization_msgs_MarkerArrayData.hh"
#include "ROSCommon_msgs/Visualization_msgs_Marker.hh"

#include <iostream>
#include <string>
#include <list>

namespace ROSCommon_msgs {
	
class Visualization_msgs_MarkerArrayCore {
protected:
	// data structure
	ROSCommon_msgsIDL::Visualization_msgs_MarkerArray idl_Visualization_msgs_MarkerArray;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef ROSCommon_msgsIDL::Visualization_msgs_MarkerArray DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	Visualization_msgs_MarkerArrayCore();
	Visualization_msgs_MarkerArrayCore(const DATATYPE &data);
	// default destructor
	virtual ~Visualization_msgs_MarkerArrayCore();
	
	const DATATYPE& get() const { return idl_Visualization_msgs_MarkerArray; }
	operator const DATATYPE&() const { return idl_Visualization_msgs_MarkerArray; }
	DATATYPE& set() { return idl_Visualization_msgs_MarkerArray; }

	static inline std::string identifier(void) { return "ROSCommon_msgs::Visualization_msgs_MarkerArray"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Markers
	/**
	 * Getter methods for element idl_Visualization_msgs_MarkerArray.markers of type vector<ROSCommon_msgs::Visualization_msgs_Marker>
	 */
	inline std::vector<ROSCommon_msgs::Visualization_msgs_Marker> getMarkersCopy() const { 
		return std::vector<ROSCommon_msgs::Visualization_msgs_Marker>(idl_Visualization_msgs_MarkerArray.markers.begin(), idl_Visualization_msgs_MarkerArray.markers.end());
	}
	inline ROSCommon_msgs::Visualization_msgs_Marker getMarkersElemAtPos(const size_t &pos) const {
		return ROSCommon_msgs::Visualization_msgs_Marker(idl_Visualization_msgs_MarkerArray.markers[pos]);
	}
	inline size_t getMarkersSize() const { return idl_Visualization_msgs_MarkerArray.markers.size(); }
	inline bool isMarkersEmpty() const { return idl_Visualization_msgs_MarkerArray.markers.empty(); }
	/**
	 * Setter methods for idl_Visualization_msgs_MarkerArray.markers of type vector<ROSCommon_msgs::Visualization_msgs_Marker>
	 */
	inline Visualization_msgs_MarkerArrayCore& setMarkers(const std::vector<ROSCommon_msgs::Visualization_msgs_Marker> &markers) { 
		idl_Visualization_msgs_MarkerArray.markers.assign(markers.begin(), markers.end());
		return *this;
	}
	inline bool setMarkersElemAtPos(const size_t &pos, const ROSCommon_msgs::Visualization_msgs_Marker &elem) {
		if(pos < idl_Visualization_msgs_MarkerArray.markers.size()) {
			idl_Visualization_msgs_MarkerArray.markers[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertMarkersVectorAtPos(const size_t &pos, const std::vector<ROSCommon_msgs::Visualization_msgs_Marker> &data) {
		if(pos < idl_Visualization_msgs_MarkerArray.markers.size()) {
			idl_Visualization_msgs_MarkerArray.markers.insert(idl_Visualization_msgs_MarkerArray.markers.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeMarkers(const size_t &size) { idl_Visualization_msgs_MarkerArray.markers.resize(size); }
	inline bool eraseMarkersElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_Visualization_msgs_MarkerArray.markers.size() ) {
			idl_Visualization_msgs_MarkerArray.markers.erase(idl_Visualization_msgs_MarkerArray.markers.begin()+pos, idl_Visualization_msgs_MarkerArray.markers.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearMarkers() { idl_Visualization_msgs_MarkerArray.markers.clear(); }
};

} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_VISUALIZATION_MSGS_MARKERARRAY_CORE_H_ */