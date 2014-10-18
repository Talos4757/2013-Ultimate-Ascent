#include "Push.h"

Push::Push() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(magazine);	
}

// Called just before this Command runs the first time
void Push::Initialize() {
	SetTimeout(0.6);//1 second
}

// Called repeatedly when this Command is scheduled to run
void Push::Execute() {
	magazine->SetPushMotor(80.0); //push
	magazine->SetDropMotor(170.0); //return the drop motor
}
// Make this return true when this Command no longer needs to run execute()
bool Push::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void Push::End() {
	Cancel();
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Push::Interrupted() {
	End();
}
