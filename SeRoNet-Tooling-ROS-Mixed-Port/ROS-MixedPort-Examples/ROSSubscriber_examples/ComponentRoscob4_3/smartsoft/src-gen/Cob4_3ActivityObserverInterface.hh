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
#ifndef _COB4_3ACTIVITY_OBSERVER_INTERFACE_HH
#define _COB4_3ACTIVITY_OBSERVER_INTERFACE_HH

// forward declaration
class Cob4_3Activity;

class Cob4_3ActivityObserverInterface {
public:
	virtual ~Cob4_3ActivityObserverInterface() {  }

	virtual void on_update_from(const Cob4_3Activity *subject) = 0;
};

#endif