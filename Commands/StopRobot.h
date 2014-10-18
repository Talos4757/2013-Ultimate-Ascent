#ifndef STOPROBOT_H
#define STOPROBOT_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
/**
 *
 *
 * @author Yaron
 */
class StopRobot: public CommandBase {
public:
	StopRobot();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
