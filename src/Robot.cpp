#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/Autonomous.h"
#include "CommandBase.h"
#include "Robot.h"

VisionTracking* Robot::visionTracking = 0;
DriveTrain* Robot::drivetrain = 0;
CompressorSubsystem* Robot::compressorSubsystem = 0;
OI* Robot::oi = 0;

void Robot::RobotInit()
{
	CommandBase::init();
	autonomousCommand = new Autonomous();
	lw = LiveWindow::GetInstance();
	visionTracking = new VisionTracking();
	drivetrain = new DriveTrain();
	compressorSubsystem = new CompressorSubsystem();
	oi = new OI();
}

void Robot::DisabledInit(){

}

void Robot::DisabledPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit()
{
	if (autonomousCommand != NULL)
		autonomousCommand->Start();
}

void Robot::AutonomousPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit()
{
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// this line or comment it out.
	if (autonomousCommand != NULL)
		autonomousCommand->Cancel();
}

void Robot::TeleopPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic()
{
	lw->Run();
}


START_ROBOT_CLASS(Robot);

