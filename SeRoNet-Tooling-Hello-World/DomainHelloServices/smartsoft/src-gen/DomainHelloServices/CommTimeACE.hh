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
#ifndef DOMAINHELLOSERVICES_COMMTIME_ACE_H_
#define DOMAINHELLOSERVICES_COMMTIME_ACE_H_

#include "DomainHelloServices/CommTime.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommTime
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainHelloServicesIDL::CommTime &data);

// de-serialization operator for DataStructure CommTime
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainHelloServicesIDL::CommTime &data);

// serialization operator for CommunicationObject CommTime
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainHelloServices::CommTime &obj);

// de-serialization operator for CommunicationObject CommTime
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainHelloServices::CommTime &obj);

#endif /* DOMAINHELLOSERVICES_COMMTIME_ACE_H_ */
