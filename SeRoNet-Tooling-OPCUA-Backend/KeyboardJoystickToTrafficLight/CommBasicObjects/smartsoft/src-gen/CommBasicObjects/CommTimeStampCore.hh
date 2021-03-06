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
#ifndef COMMBASICOBJECTS_COMMTIMESTAMP_CORE_H_
#define COMMBASICOBJECTS_COMMTIMESTAMP_CORE_H_

#include "CommBasicObjects/CommTimeStampData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommBasicObjects {
	
class CommTimeStampCore {
protected:
	// data structure
	CommBasicObjectsIDL::CommTimeStamp idl_CommTimeStamp;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommBasicObjectsIDL::CommTimeStamp DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommTimeStampCore();
	CommTimeStampCore(const DATATYPE &data);
	// default destructor
	virtual ~CommTimeStampCore();
	
	const DATATYPE& get() const { return idl_CommTimeStamp; }
	operator const DATATYPE&() const { return idl_CommTimeStamp; }
	DATATYPE& set() { return idl_CommTimeStamp; }

	static inline std::string identifier(void) { return "CommBasicObjects::CommTimeStamp"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Sec
	inline unsigned int getSec() const { return idl_CommTimeStamp.sec; }
	inline CommTimeStampCore& setSec(const unsigned int &sec) { idl_CommTimeStamp.sec = sec; return *this; }
	
	// getter and setter for element Usec
	inline unsigned int getUsec() const { return idl_CommTimeStamp.usec; }
	inline CommTimeStampCore& setUsec(const unsigned int &usec) { idl_CommTimeStamp.usec = usec; return *this; }
};

} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMTIMESTAMP_CORE_H_ */
