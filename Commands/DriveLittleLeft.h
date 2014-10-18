#ifndef DRIVELITTLELEFT_H
#define DRIVELITTLELEFT_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
/**
 *
 *
 * @author Yaron
 */
class DriveLittleLeft: public CommandBase {
public:
	DriveLittleLeft();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
