#include "RedCommand.h"

RedCommand::RedCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(CommandBase::ledSystem);
}

// Called just before this Command runs the first time
void RedCommand::Initialize()
{
	ledSystem->setRed();
}

// Called repeatedly when this Command is scheduled to run
void RedCommand::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool RedCommand::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void RedCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RedCommand::Interrupted()
{
	End();
}
