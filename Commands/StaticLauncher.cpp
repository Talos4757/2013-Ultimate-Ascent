#include "StaticLauncher.h"

StaticLauncher::StaticLauncher() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(launcher);	
}

// Called just before this Command runs the first time
void StaticLauncher::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void StaticLauncher::Execute() {
	launcher->Launch(Launcher::on ? 1 : 0);
	}
// Make this return true when this Command no longer needs to run execute()
bool StaticLauncher::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StaticLauncher::End() {
	Cancel();
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StaticLauncher::Interrupted() {
	End();
}
