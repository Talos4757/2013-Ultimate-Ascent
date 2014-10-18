#include "StaticMagazine.h"

StaticMagazine::StaticMagazine() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(magazine);	
}

// Called just before this Command runs the first time
void StaticMagazine::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void StaticMagazine::Execute() {
	magazine->SetDropMotor(170.0);
	magazine->SetPushMotor(170.0);
}
// Make this return true when this Command no longer needs to run execute()
bool StaticMagazine::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StaticMagazine::End() {
	Cancel();
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StaticMagazine::Interrupted() {
	End();
}
