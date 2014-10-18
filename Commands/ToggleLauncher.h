#ifndef TOGGLELAUNCHER_H
#define TOGGLELAUNCHER_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
/**
 *
 *
 * @author Yaron
 */
class ToggleLauncher: public CommandBase {
	static bool on;
public:
	ToggleLauncher();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
