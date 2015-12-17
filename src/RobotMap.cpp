#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

Encoder* RobotMap::drivetrainfrontLeft = NULL;
Encoder* RobotMap::drivetrainfrontRight = NULL;
Encoder* RobotMap::drivetrainbackLeft = NULL;
Encoder* RobotMap::drivetrainbackRight = NULL;

Jaguar* RobotMap::drivetrainSpeedController1 = NULL;
Jaguar* RobotMap::drivetrainSpeedController2 = NULL;
Jaguar* RobotMap::drivetrainSpeedController3 = NULL;
Jaguar* RobotMap::drivetrainSpeedController4 = NULL;
RobotDrive* RobotMap::drivetrainRobotDrive = NULL;

Relay* RobotMap::compressorSubsystemCompressorSpike = NULL;
DigitalInput* RobotMap::compressorSubsystemCompressorPressureSwitch = NULL;



void RobotMap::init() {
	LiveWindow* lw = LiveWindow::GetInstance();

	drivetrainfrontLeft = new Encoder(0, 1, false, Encoder::k4X);
	lw->AddSensor("Drivetrain", "frontLeft", drivetrainfrontLeft);
	drivetrainfrontLeft->SetDistancePerPulse(1.0);
		//drivetrainfrontLeft->setPIDSourceParameter(Encoder:kRate);
	drivetrainfrontRight = new Encoder(0, 2, false, Encoder::k4X);
	lw->AddSensor("Drivetrain", "frontRight", drivetrainfrontRight);
	drivetrainfrontRight->SetDistancePerPulse(1.0);
		//drivetrainfrontRight->setPIDSourceParameter(Encoder:kRate);
	drivetrainbackLeft = new Encoder(0, 3, false, Encoder::k4X);
	lw->AddSensor("Drivetrain", "backLeft", drivetrainbackLeft);
	drivetrainbackLeft->SetDistancePerPulse(1.0);
		//drivetrainbackLeft->setPIDSourceParameter(Encoder:kRate);
	drivetrainbackRight = new Encoder(0, 4, false, Encoder::k4X);
	lw->AddSensor("Drivetrain", "backRight", drivetrainbackRight);
	drivetrainbackRight->SetDistancePerPulse(1.0);
		//drivetrainbackRight->setPIDSourceParameter(Encoder:kRate);

	drivetrainSpeedController1 = new Jaguar(0);
	lw->AddActuator("Drivetrain", "Speed Controller 1", (TalonSRX*) drivetrainSpeedController1);
	drivetrainSpeedController2 = new Jaguar(1);
	lw->AddActuator("Drivetrain", "Speed Controller 2", (TalonSRX*) drivetrainSpeedController2);
	drivetrainSpeedController3 = new Jaguar(2);
	lw->AddActuator("Drivetrain", "Speed Controller 3", (TalonSRX*) drivetrainSpeedController3);
	drivetrainSpeedController4 = new Jaguar(3);
	lw->AddActuator("Drivetrain", "Speed Controller 4", (TalonSRX*) drivetrainSpeedController4);

	drivetrainRobotDrive = new RobotDrive(drivetrainSpeedController1, drivetrainSpeedController2);

	drivetrainRobotDrive->SetSafetyEnabled(false);
	drivetrainRobotDrive->SetExpiration(0.1);
	drivetrainRobotDrive->SetSensitivity(0.5);
	drivetrainRobotDrive->SetMaxOutput(1.0);

	compressorSubsystemCompressorSpike = new Relay(1);
	lw->AddActuator("CompressorSubsystem", "CompressorSpike", compressorSubsystemCompressorSpike);

	compressorSubsystemCompressorPressureSwitch = new DigitalInput(1);
	lw->AddSensor("CompressorSubsystem", "CompressorPressureSwitch", compressorSubsystemCompressorPressureSwitch);
}
