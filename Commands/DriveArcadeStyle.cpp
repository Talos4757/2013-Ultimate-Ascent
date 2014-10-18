#include "DriveArcadeStyle.h"

DriveArcadeStyle::DriveArcadeStyle() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);	
}

// Called just before this Command runs the first time
void DriveArcadeStyle::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void DriveArcadeStyle::Execute() {
	SmartDashboard::PutNumber("Left Motor Voltage",chassis->getLeftMotor()->Get());
	SmartDashboard::PutNumber("Right Motor Voltage",chassis->getRightMotor()->Get());
	chassis->ArcadeDrive(oi->getRightStick());
}
// Make this return true when this Command no longer needs to run execute()
bool DriveArcadeStyle::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveArcadeStyle::End() {
	Cancel();
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveArcadeStyle::Interrupted() {
	End();
}
