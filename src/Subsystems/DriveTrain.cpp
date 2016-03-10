#include "DriveTrain.h"
#include "../RobotMap.h"
#include "../Commands/Drive.h"

DriveTrain::DriveTrain() : Subsystem("Drivetrain")
{
	frontLeft = RobotMap::drivetrainfrontLeft;
	frontRight = RobotMap::drivetrainfrontRight;
	backLeft = RobotMap::drivetrainbackLeft;
	backRight = RobotMap::drivetrainbackRight;

	speedController1 = RobotMap::drivetrainSpeedController1;
	speedController2 = RobotMap::drivetrainSpeedController2;
	speedController3 = RobotMap::drivetrainSpeedController3;
	speedController4 = RobotMap::drivetrainSpeedController4;
	robotDrive = RobotMap::drivetrainRobotDrive;
}

void DriveTrain::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new Drive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void DriveTrain::Go(float move, float turn) {
	robotDrive->ArcadeDrive(move, turn);
}

void DriveTrain::AutonTankDrive(double left, double right) {
	//drives robot in tank mode using specified values
	robotDrive->TankDrive(left, right);
}
