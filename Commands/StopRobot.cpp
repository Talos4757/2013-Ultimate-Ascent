#include "StopRobot.h"

StopRobot::StopRobot() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);	
}

// Called just before this Command runs the first time
void StopRobot::Initialize() {
	chassis->TankDrive(0.0f,0.0f);
}

// Called repeatedly when this Command is scheduled to run
void StopRobot::Execute() {

}
// Make this return true when this Command no longer needs to run execute()
bool StopRobot::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void StopRobot::End() {
	chassis->TankDrive(0.0f,0.0f);
	Cancel();
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopRobot::Interrupted() {
	End();
}
