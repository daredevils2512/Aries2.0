#ifndef DriveTrain_H
#define DriveTrain_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../RobotMap.h"

class DriveTrain: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Encoder* frontLeft;
	Encoder* frontRight;
	Encoder* backLeft;
	Encoder* backRight;

	Jaguar* speedController1;
	Jaguar* speedController2;
	Jaguar* speedController3;
	Jaguar* speedController4;
	RobotDrive* robotDrive;

	DriveTrain();
	void InitDefaultCommand();
	void Go(float, float);

};

#endif
