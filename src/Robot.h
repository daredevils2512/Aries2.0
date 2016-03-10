/*
 * Robot.h
 *
 *  Created on: Nov 15, 2015
 *      Author: Troy
 */

#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_

#include <Subsystems/CompressorSubsystem.h>
#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/ExampleCommand.h"
#include "CommandBase.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "Subsystems/VisionTracking.h"
#include "Subsystems/Drivetrain.h"
#include "Subsystems/CompressorSubsystem.h"
#include "OI.h"

class Robot: public IterativeRobot
{
public:
	Command *autonomousCommand;
	LiveWindow *lw;
	static VisionTracking* visionTracking;
	static DriveTrain* drivetrain;
	static CompressorSubsystem* compressorSubsystem;
	static Joystick* stick;
	static OI* oi;

	virtual void RobotInit();
	virtual void DisabledInit();
	virtual void DisabledPeriodic();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();

};




#endif /* SRC_ROBOT_H_ */
