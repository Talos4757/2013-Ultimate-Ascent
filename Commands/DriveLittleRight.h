#ifndef DRIVELITTLERIGHT_H
#define DRIVELITTLERIGHT_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
/**
 *
 *
 * @author Yaron
 */
class DriveLittleRight: public CommandBase {
public:
	DriveLittleRight();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
