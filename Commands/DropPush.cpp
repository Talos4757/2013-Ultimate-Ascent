#include "DropPush.h"
#include "Drop.h"
#include "Push.h"
DropPush::DropPush() { //PushDrop!! not DropPush.
	AddSequential(new Push());	
	AddSequential(new Drop());	
}
