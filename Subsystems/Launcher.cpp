#include "Launcher.h"
#include "../Commands/StaticLauncher.h"
#include "../Commands/ToggleLauncher.h"
//speed from -1 to 1
void Launcher::Launch(float speed)
{
	this->MotorOne->SetSpeed(-speed);
	this->MotorTwo->SetSpeed(-speed);

}
Launcher::Launcher() : Subsystem("Launcher") {
	this->MotorOne = new Victor(LAUNCHERMOTOR_ONE);
	this->MotorTwo = new Victor(LAUNCHERMOTOR_TWO);
}
bool Launcher::on = false;
    
void Launcher::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new StaticLauncher());
	SetDefaultCommand(new StaticLauncher());
}
