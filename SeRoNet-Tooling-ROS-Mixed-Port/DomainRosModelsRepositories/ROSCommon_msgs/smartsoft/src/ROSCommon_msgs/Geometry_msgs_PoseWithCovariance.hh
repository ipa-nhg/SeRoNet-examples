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
#ifndef ROSCOMMON_MSGS_GEOMETRY_MSGS_POSEWITHCOVARIANCE_H_
#define ROSCOMMON_MSGS_GEOMETRY_MSGS_POSEWITHCOVARIANCE_H_

#include "ROSCommon_msgs/Geometry_msgs_PoseWithCovarianceCore.hh"

namespace ROSCommon_msgs {
		
class Geometry_msgs_PoseWithCovariance : public Geometry_msgs_PoseWithCovarianceCore {
	public:
		// default constructors
		Geometry_msgs_PoseWithCovariance();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// Geometry_msgs_PoseWithCovariance(const ROSCommon_msgs::Geometry_msgs_Pose &pose, const std::vector<double> &covariance);
		
		Geometry_msgs_PoseWithCovariance(const Geometry_msgs_PoseWithCovarianceCore &geometry_msgs_PoseWithCovariance);
		Geometry_msgs_PoseWithCovariance(const DATATYPE &geometry_msgs_PoseWithCovariance);
		virtual ~Geometry_msgs_PoseWithCovariance();
		
		// use framework specific getter and setter methods from core (base) class
		using Geometry_msgs_PoseWithCovarianceCore::get;
		using Geometry_msgs_PoseWithCovarianceCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const Geometry_msgs_PoseWithCovariance &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace ROSCommon_msgs */
#endif /* ROSCOMMON_MSGS_GEOMETRY_MSGS_POSEWITHCOVARIANCE_H_ */