#include "DriveForTime.h"

DriveForTime::DriveForTime(double time)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(CommandBase::busterDrive);
	SetTimeout(time);
}

// Called just before this Command runs the first time
void DriveForTime::Initialize()
{
	busterDrive->Drive(.5,0);
}

// Called repeatedly when this Command is scheduled to run
void DriveForTime::Execute()
{
	busterDrive->Drive(.5,0);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForTime::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void DriveForTime::End()
{
	busterDrive->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForTime::Interrupted()
{
	End();
}
