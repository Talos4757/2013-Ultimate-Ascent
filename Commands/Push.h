#ifndef PUSH_H
#define PUSH_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
/**
 *
 *
 * @author Yaron
 */
class Push: public CommandBase {
public:
	Push();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
