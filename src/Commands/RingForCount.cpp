#include "RingForCount.h"
#include <math.h>

RingForCount::RingForCount(int count):
	Count(count)

{
	Requires(bellSystem);

	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void RingForCount::Initialize()
{
	bellSystem->GetEncoder().Reset();
}

// Called repeatedly when this Command is scheduled to run
void RingForCount::Execute()
{
	bellSystem->Ring();
}

// Make this return true when this Command no longer needs to run execute()
bool RingForCount::IsFinished()
{
	return fabs(bellSystem->GetEncoder().Get()) > Count;
}

// Called once after isFinished returns true
void RingForCount::End()
{
	bellSystem->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RingForCount::Interrupted()
{
	End();
}
