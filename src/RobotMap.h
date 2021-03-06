#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"
#include "Subsystems/Drivetrain.h"
#include "Subsystems/CompressorSubsystem.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;

class RobotMap {
public:
	static Encoder* drivetrainfrontLeft;
	static Encoder* drivetrainfrontRight;
	static Encoder* drivetrainbackLeft;
	static Encoder* drivetrainbackRight;

	static Jaguar* drivetrainSpeedController1;
	static Jaguar* drivetrainSpeedController2;
	static Jaguar* drivetrainSpeedController3;
	static Jaguar* drivetrainSpeedController4;
	static RobotDrive* drivetrainRobotDrive;

	static Relay* compressorSubsystemCompressorSpike;
	static DigitalInput* compressorSubsystemCompressorPressureSwitch;

	static void init();
};

#endif
