#include "Launch.h"

Launch::Launch() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	speed = 1;
	Requires(launcher);
}
Launch::Launch(float speed) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	this->speed = speed;
	Requires(launcher);
}

// Called just before this Command runs the first time
void Launch::Initialize() {
	SetTimeout(10);//1 second
	launcher->Launch(speed);
}

// Called repeatedly when this Command is scheduled to run
void Launch::Execute() {
	launcher->Launch(speed);
}
// Make this return true when this Command no longer needs to run execute()
bool Launch::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void Launch::End() {
	launcher->Launch(0);
	Cancel();
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Launch::Interrupted() {
	End();
}
