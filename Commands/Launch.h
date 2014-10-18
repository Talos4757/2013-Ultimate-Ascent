#ifndef LAUNCH_H
#define LAUNCH_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
/**
 *
 *
 * @author Yaron
 */
class Launch: public CommandBase {
	float speed;
public:
	Launch();
	Launch(float speed);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
