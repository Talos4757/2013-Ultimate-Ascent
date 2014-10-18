#ifndef MAGAZINE_H
#define MAGAZINE_H
#include "Commands/Subsystem.h"
#include "../Robotmap.h"
#include "WPILib.h"

/**
 *
 *
 * @author Yaron
 */
class Magazine: public Subsystem {
private:
	Servo* PushMotor;
	Servo* DropMotor;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	
	Magazine();
	void InitDefaultCommand();
	
	//0 to 170
	void SetPushMotor(float angle);
	
	//0 to 170
	void SetDropMotor(float angle);
};

#endif
