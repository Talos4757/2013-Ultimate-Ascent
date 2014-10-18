#include "DriveLittleLeft.h"

DriveLittleLeft::DriveLittleLeft() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);	
}

// Called just before this Command runs the first time
void DriveLittleLeft::Initialize() {
	chassis->ArcadeDrive(0.0f,0.5f);
}

// Called repeatedly when this Command is scheduled to run
void DriveLittleLeft::Execute() {

}
// Make this return true when this Command no longer needs to run execute()
bool DriveLittleLeft::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveLittleLeft::End() {
	chassis->TankDrive(0.0f,0.0f);
	Cancel();
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveLittleLeft::Interrupted() {
	End();
}
