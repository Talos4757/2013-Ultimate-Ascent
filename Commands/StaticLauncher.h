#ifndef STATICLAUNCHER_H
#define STATICLAUNCHER_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
/**
 *
 *
 * @author Yaron
 */
class StaticLauncher: public CommandBase {
public:
	StaticLauncher();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
