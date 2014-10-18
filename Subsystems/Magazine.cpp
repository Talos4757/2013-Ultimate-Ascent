#include "Magazine.h"
#include "../Commands/StaticMagazine.h"

void Magazine::SetPushMotor(float angle)
{
	this->PushMotor->SetAngle(angle);
}
void Magazine::SetDropMotor(float angle)
{
	this->DropMotor->SetAngle(angle);
}

Magazine::Magazine() : Subsystem("Magazine") {
	this->PushMotor = new Servo(PUSHMOTOR);
	this->DropMotor = new Servo(DROPMOTOR);
}
    
void Magazine::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new StaticMagazine());
}
