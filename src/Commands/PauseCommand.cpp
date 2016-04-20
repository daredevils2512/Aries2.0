#include "PauseCommand.h"

PauseCommand::PauseCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	SetTimeout(0.5);
}

// Called just before this Command runs the first time
void PauseCommand::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void PauseCommand::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool PauseCommand::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void PauseCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PauseCommand::Interrupted()
{

}
