#include "RunCompressor.h"

RunCompressor::RunCompressor()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::compressorSubsystem);
}

// Called just before this Command runs the first time
void RunCompressor::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void RunCompressor::Execute()
{
	if(!Robot::compressorSubsystem->Pressurized()) {
		Robot::compressorSubsystem->On();
	}
	else {
		Robot::compressorSubsystem->Off();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool RunCompressor::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void RunCompressor::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunCompressor::Interrupted()
{

}
