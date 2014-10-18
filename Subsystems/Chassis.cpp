#include "Chassis.h"
#include "../Commands/DriveArcadeStyle.h"
Chassis::Chassis() : Subsystem("Chassis") {
	LeftMotor = new Victor(LEFTMOTOR);
	RightMotor = new Victor(RIGHTMOTOR);
	drive = new RobotDrive(LeftMotor, RightMotor);
	drive->SetInvertedMotor(RobotDrive::kRearRightMotor,true);
	drive->SetInvertedMotor(RobotDrive::kRearLeftMotor,true);
	
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new DriveTankStyle());
	SetDefaultCommand(new DriveArcadeStyle());
	//SetDefaultCommand(new DriveToRect());
}
void Chassis::ArcadeDrive(Joystick* stick)
{
	drive->ArcadeDrive(stick);
}

void Chassis::TankDrive(Joystick* leftStick, Joystick* rightStick){
	drive->TankDrive(leftStick,rightStick);
}

void Chassis::TankDrive(float leftValue, float rightValue){
	drive->TankDrive(leftValue,rightValue);
	SmartDashboard::PutNumber("TankDrive leftValue",leftValue);
	SmartDashboard::PutNumber("TankDrive rightValue",rightValue);
}

void Chassis::ArcadeDrive(float move, float rotate){
	drive->ArcadeDrive(move, rotate);
	SmartDashboard::PutNumber("ArcadeDrive move",move);
	SmartDashboard::PutNumber("ArcadeDrive rotate",rotate);
}

SpeedController* Chassis::getLeftMotor(){
	return LeftMotor;
}
SpeedController* Chassis::getRightMotor(){
	return RightMotor;
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
