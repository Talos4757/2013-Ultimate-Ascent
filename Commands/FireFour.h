#ifndef FIREFOUR_H
#define FIREFOUR_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
/**
 *
 *
 * @author Yaron
 */
class FireFour: public CommandGroup {
	void init(float speed);
public:
	FireFour(float speed);
	FireFour();
};

#endif
