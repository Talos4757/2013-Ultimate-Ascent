#include "Drop.h"

Drop::Drop() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(magazine);	
}

// Called just before this Command runs the first time
void Drop::Initialize() {
	SetTimeout(0.5);
}

// Called repeatedly when this Command is scheduled to run
void Drop::Execute() {
	magazine->SetDropMotor(65.0); //drop
	magazine->SetPushMotor(170.0); //get the push motor back
}
// Make this return true when this Command no longer needs to run execute()
bool Drop::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void Drop::End() {
	Cancel();
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Drop::Interrupted() {
	End();
}
