#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "../Robotmap.h"
#include "WPILib.h"

/**
 *
 *
 * @author Yaron
 */
class Chassis: public Subsystem {
private:
	Victor* LeftMotor;
	Victor* RightMotor;
	RobotDrive* drive;
	
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	void ArcadeDrive(Joystick* stick);
	void ArcadeDrive(float move, float rotate);
	Chassis();
	void InitDefaultCommand();
	void TankDrive(float leftValue, float rightValue);
	void TankDrive(Joystick* leftStick, Joystick* rightStick);
	SpeedController* getLeftMotor();
	SpeedController* getRightMotor();
};

#endif
