#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H
#include "Subsystems/Launcher.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/Magazine.h"
#include "OI.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase();
	// Create a single static instance of all of your subsystems
	//static ExampleSubsystem *examplesubsystem;

	static Chassis *chassis;
	static Launcher *launcher;
	
	static Magazine *magazine;
	static OI *oi;
	
	static void Init();
};

#endif
