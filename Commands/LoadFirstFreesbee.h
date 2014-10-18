#ifndef LOADFIRSTFREESBEE_H
#define LOADFIRSTFREESBEE_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
/**
 *
 *
 * @author Yaron
 */
class LoadFirstFreesbee: public CommandBase {
public:
	LoadFirstFreesbee();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
