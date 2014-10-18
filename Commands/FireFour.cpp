#include "FireFour.h"
#include "Drop.h"
#include "Push.h"
#include "StopRobot.h"
#include "Launch.h"

FireFour::FireFour() {
	init(1);
}
FireFour::FireFour(float speed) {
	init(speed);
}
void FireFour::init(float speed)
{
		AddParallel(new Launch(speed));
		AddSequential(new WaitCommand(2));
		AddSequential(new Push()); //first disket is in the bla
		AddSequential(new WaitCommand(1));
		for(int i = 0; i < 3; i++)
		{
			AddSequential(new Drop());
			//AddSequential(new WaitCommand(0.1)); //wait for the disk to go down
			AddSequential(new Push());
			
			AddSequential(new WaitCommand(1));
		}
}
