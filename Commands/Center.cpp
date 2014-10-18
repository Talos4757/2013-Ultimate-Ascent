/*#include "Center.h"
#include "VisionProcing.h"
#include <math.h>


Center::Center() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);	
}

// Called just before this Command runs the first time
void Center::Initialize() {
	times = 0;
}

// Called repeatedly when this Command is scheduled to run
void Center::Execute() {
	float rot = VisionProcing::VisionProccess().x_normilized;

	chassis->ArcadeDrive(0,1.2*rot);
	if(fabsf(rot)<0.2)
		times++;
}
// Make this return true when this Command no longer needs to run execute()
bool Center::IsFinished() {
	return times > 15;
}

// Called once after isFinished returns true
void Center::End() {
	Cancel();
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Center::Interrupted() {
	End();
}
*/