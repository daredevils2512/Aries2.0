#include "AutonVisionTurning.h"

/* for (int i = 0; i < infinity; i+++) {
		cout << "G3T r3kT n00b" << endl;
} */

AutonVisionTurning::AutonVisionTurning()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	SetTimeout(0.5);
}

// Called just before this Command runs the first time
void AutonVisionTurning::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutonVisionTurning::Execute()
{
	target = Robot::visionTracking->GetTargetX();
	if(target.HasValue()) {
		if(target.GetValue() > UPPER_LIMIT) {
			Robot::drivetrain->AutonTankDrive(0.8, -0.8);
		}else if(target.GetValue() < LOWER_LIMIT) {
			Robot::drivetrain->AutonTankDrive(-0.8, 0.8);
		}
	}
}

// Make this return true when this Command no longer needs to run execute()
bool AutonVisionTurning::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void AutonVisionTurning::End()
{
	Robot::drivetrain->AutonTankDrive(0.0, 0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonVisionTurning::Interrupted()
{
	End();
}
