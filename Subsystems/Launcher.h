#ifndef LAUNCHER_H
#define LAUNCHER_H
#include "Commands/Subsystem.h"
#include "../Robotmap.h"
#include "WPILib.h"

/**
 *
 *
 * @author Yaron
 */
class Launcher: public Subsystem {
private:
	Victor* MotorOne;
	Victor* MotorTwo;
	
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:

	static bool on;
	Launcher();
	void InitDefaultCommand();
	//speed from -1 to 1
	void Launch(float speed);
};

#endif
