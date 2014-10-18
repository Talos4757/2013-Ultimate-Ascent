#include "OI.h"
#include "Commands/DriveArcadeStyle.h"
//#include "Commands/VisionProcing.h"
#include "Commands/DriveLittleLeft.h"
#include "Commands/DriveLittleRight.h"
#include "Commands/FireFour.h"
#include "Commands/LoadFirstFreesbee.h"
#include "Commands/ToggleLauncher.h"
#include "Commands/Drop.h"
#include "Commands/DropPush.h"
//#include "Commands/ToggleCameraTarget.h"
OI::OI() {
	LeftStick = new Joystick(OI::LeftStickChannel);
	RightStick = new Joystick(OI::RightStickChannel);

	//DriveToPointButton = new JoystickButton(RightStick, 10);
	//DriveToPointButton->WhenPressed(new VisionProcing());

	LaunchingButtons = new JoystickButton(LeftStick, 3);
	LaunchingButtons->WhenPressed(new FireFour());
	RotateLeft = new JoystickButton(RightStick, 5);
	RotateLeft->WhileHeld(new DriveLittleLeft());
		
	RotateRight = new JoystickButton(RightStick, 4);
	RotateRight->WhileHeld(new DriveLittleRight());
	
	LoadFirstFreesbeeButton = new JoystickButton(LeftStick, 7);
	LoadFirstFreesbeeButton->WhenPressed(new LoadFirstFreesbee());

	PushButton = new JoystickButton(LeftStick, 10);
	PushButton->WhenPressed(new DropPush());
	DropButton = new JoystickButton(LeftStick, 11);
	DropButton->WhenPressed(new Drop());
	
	ToggleLauncherButton = new JoystickButton(LeftStick, 6);
	ToggleLauncherButton->WhenPressed(new ToggleLauncher());
	
	//ToggleCameraTargetButton = new JoystickButton(LeftStick, 8);
	//ToggleCameraTargetButton->WhenPressed(new ToggleCameraTarget());
	
	
}
Joystick* OI::getRightStick()
{
	return RightStick;
}
Joystick* OI::getLeftStick()
{
	return LeftStick;
}
