#include "RingForTime.h"

RingForTime::RingForTime(double seconds)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(CommandBase::bellSystem);
	SetTimeout(seconds);
}

// Called just before this Command runs the first time
void RingForTime::Initialize()
{
	bellSystem->Ring();
}

// Called repeatedly when this Command is scheduled to run
void RingForTime::Execute()
{
	SmartDashboard::PutNumber("Encoder value", bellSystem->GetEncoder().GetPeriod());
}

// Make this return true when this Command no longer needs to run execute()
bool RingForTime::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void RingForTime::End()
{
	bellSystem->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RingForTime::Interrupted()
{
	End();
}
