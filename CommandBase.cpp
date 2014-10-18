#include "CommandBase.h"

CommandBase::CommandBase() : Command()
{
	
}
Chassis* CommandBase::chassis = NULL;
Launcher* CommandBase::launcher = NULL;
OI* CommandBase::oi = NULL;
Magazine* CommandBase::magazine = NULL;

void CommandBase::Init()
{	
	magazine = new Magazine();
	launcher = new Launcher();
	 chassis = new Chassis();
	 oi = new OI();
}
