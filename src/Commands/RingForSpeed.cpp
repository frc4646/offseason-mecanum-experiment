#include "RingForSpeed.h"


RingForSpeed::RingForSpeed(double ringsPerSecond):
	pid(.5, .1, 0, &bellSystem->GetEncoderPIDSource(), &bellSystem->GetController())
{
	Requires(bellSystem);
//	 Use Requires() here to declare subsystem dependencies
//	 eg. Requires(chassis);
	pid.SetSetpoint(ringsPerSecond);
}

// Called just before this Command runs the first time
void RingForSpeed::Initialize()
{
	pid.Reset();
	pid.Enable();
}

// Called repeatedly when this Command is scheduled to run
void RingForSpeed::Execute()
{
	SmartDashboard::PutNumber("Ring speed", bellSystem->GetEncoder().GetPeriod());
	SmartDashboard::PutNumber("Ring Power", pid.Get());
}

// Make this return true when this Command no longer needs to run execute()
bool RingForSpeed::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void RingForSpeed::End()
{
	pid.Disable();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RingForSpeed::Interrupted()
{
	End();
}
