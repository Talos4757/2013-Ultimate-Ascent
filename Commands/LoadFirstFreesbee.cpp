#include "LoadFirstFreesbee.h"

LoadFirstFreesbee::LoadFirstFreesbee() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(magazine);	
}

// Called just before this Command runs the first time
void LoadFirstFreesbee::Initialize() {
	SetTimeout(0.4);
}

// Called repeatedly when this Command is scheduled to run
void LoadFirstFreesbee::Execute() {
	magazine->SetDropMotor(90.0);
}
// Make this return true when this Command no longer needs to run execute()
bool LoadFirstFreesbee::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void LoadFirstFreesbee::End() {
	Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LoadFirstFreesbee::Interrupted() {
	End();
}
