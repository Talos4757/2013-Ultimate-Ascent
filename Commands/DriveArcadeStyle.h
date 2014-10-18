#ifndef DRIVEARCADESTYLE_H
#define DRIVEARCADESTYLE_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
/**
 *
 *
 * @author Yaron
 */
class DriveArcadeStyle: public CommandBase {
public:
	DriveArcadeStyle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
