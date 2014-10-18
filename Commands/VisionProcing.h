/*#ifndef VISIONPROCING_H
#define VISIONPROCING_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

 
struct Proccessed{
	double Distance;
	double x_normilized; 
};

class VisionProcing: public CommandGroup {
public:
	static AxisCamera* camera;
	static bool isHighTarget;
	static Proccessed VisionProccess();
	VisionProcing();
	static void Init();
};

#endif
*/
