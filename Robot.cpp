#include "WPILib.h"
#include "CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/FireFour.h"
#include "Commands/VisionProcing.h"
//#include "LiveWindow/LiveWindow.h"
/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */ 


class Robot : public SimpleRobot
{
public:
	Robot(void){ //Analog Input 1
		CommandBase::Init();
		//VisionProcing::Init();
		//table = NetworkTable::GetTable("database");
	}
	~Robot(void)
	{ 
		
	}
	void Autonomous(void)
	{

		//Scheduler::GetInstance()->Run();
		//Wait(1);
		Scheduler::GetInstance()->AddCommand(new FireFour(0.75f));
		while(IsAutonomous())
		{
			Scheduler::GetInstance()->Run();
			Wait(0.05);//    for 0.5 seconds
		}
	
	}

	/**
	 * Runs the motors with arcade steering. 
	 */
	void OperatorControl(void)
	{
		while (IsOperatorControl())
		{
			Scheduler::GetInstance()->Run();
			Wait(0.02f);// wait for a motor update time
		}
	}
	
	/**
	 * Runs during test mode
	 */
	void Test() {
		//window->GetInstance()->Run();
		while(IsTest()){
			Wait(0.05);
		}
	}

    void RobotInit()
	{
 	}
	void Disabled()
	{
	
	}
	/*
	void RobotMain()
	{
	
	}
	*/
};

START_ROBOT_CLASS(Robot);

