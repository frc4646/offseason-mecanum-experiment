#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/AutoCommand.h"
#include "CommandBase.h"
#include "Commands/RingForTime.h"
#include "Commands/RingForCount.h"

class Robot: public IterativeRobot
{
private:
	Command *autonomousCommand;
	SendableChooser *chooser;
	RingForTime *ringTime;
	LiveWindow *lw;

	void DisabledInit(){

	}

	void RobotInit()
	{
		CommandBase::init();
//		autonomousCommand = new AutoCommand();
		chooser = new SendableChooser();
		ringTime = new RingForTime(3);
		lw = LiveWindow::GetInstance();
		SmartDashboard::PutData(Scheduler::GetInstance());
		SmartDashboard::PutData("Ring for time", ringTime);
		chooser->AddDefault("Ring for time", new RingForTime(2));
		chooser->AddObject("Ring for five seconds", new RingForTime(5));
		chooser->AddObject("Ring for one rotation", new RingForCount(1));
		chooser->AddObject("Ring for two rotations", new RingForCount(2));
		SmartDashboard::PutData("Autonomous mode", chooser);
	}
	
	void DisabledPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void AutonomousInit()
	{
		autonomousCommand = (Command*) chooser->GetSelected();
		if (autonomousCommand != NULL)
			autonomousCommand->Start();
	}

	void AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TeleopInit()
	{
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		if (autonomousCommand != NULL)
			autonomousCommand->Cancel();
	}

	void TeleopPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TestPeriodic()
	{
		lw->Run();
	}
};

START_ROBOT_CLASS(Robot);

