#include "RingWhileHeld.h"

RingWhileHeld::RingWhileHeld()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis)
	Requires(CommandBase::bellSystem);
}

// Called just before this Command runs the first time
void RingWhileHeld::Initialize()
{
	bellSystem->Ring();
}

// Called repeatedly when this Command is scheduled to run
void RingWhileHeld::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool RingWhileHeld::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void RingWhileHeld::End()
{
	bellSystem->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RingWhileHeld::Interrupted()
{
	End();
}
