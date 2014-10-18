#include "ToggleLauncher.h"

ToggleLauncher::ToggleLauncher() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}
// Called just before this Command runs the first time
void ToggleLauncher::Initialize() {
	Launcher::on = !Launcher::on;
}

// Called repeatedly when this Command is scheduled to run
void ToggleLauncher::Execute() {
}
// Make this return true when this Command no longer needs to run execute()
bool ToggleLauncher::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ToggleLauncher::End() {
	Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleLauncher::Interrupted() {
	End();
}
