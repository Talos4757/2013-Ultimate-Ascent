/*#include "ToggleCameraTarget.h"
#include "VisionProcing.h"
ToggleCameraTarget::ToggleCameraTarget() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}
// Called just before this Command runs the first time
void ToggleCameraTarget::Initialize() {
	VisionProcing::isHighTarget = !VisionProcing::isHighTarget;
}

// Called repeatedly when this Command is scheduled to run
void ToggleCameraTarget::Execute() {
}
// Make this return true when this Command no longer needs to run execute()
bool ToggleCameraTarget::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ToggleCameraTarget::End() {
	Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleCameraTarget::Interrupted() {
	End();
}
*/
