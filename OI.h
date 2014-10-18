#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick *LeftStick;
	Joystick *RightStick;
	
	JoystickButton* DriveToPointButton;
	JoystickButton* RotateLeft;
	JoystickButton* RotateRight;
	JoystickButton* LaunchingButtons;
	JoystickButton* LoadFirstFreesbeeButton;
	
	JoystickButton* PushButton;
	JoystickButton* DropButton;
	
	JoystickButton* ToggleLauncherButton;
	JoystickButton* ToggleCameraTargetButton;
	static const int RightStickChannel = 2;
	static const int LeftStickChannel =1; 
public:
	OI();
	Joystick* getRightStick();
	Joystick* getLeftStick();
};

#endif
