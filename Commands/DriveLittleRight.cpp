#include "DriveLittleRight.h"

DriveLittleRight::DriveLittleRight() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);	
}

// Called just before this Command runs the first time
void DriveLittleRight::Initialize() {
	chassis->ArcadeDrive(0,-0.5f);
}

// Called repeatedly when this Command is scheduled to run
void DriveLittleRight::Execute() {

}
// Make this return true when this Command no longer needs to run execute()
bool DriveLittleRight::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveLittleRight::End() {
	chassis->TankDrive(0.0f,0.0f);
	Cancel();
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveLittleRight::Interrupted() {
	End();
}
