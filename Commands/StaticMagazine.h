#ifndef STATICMAGAZINE_H
#define STATICMAGAZINE_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
/**
 *
 *
 * @author Yaron
 */
class StaticMagazine: public CommandBase {
public:
	StaticMagazine();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
