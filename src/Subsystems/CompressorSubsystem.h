#ifndef CompressorSubsystem_H
#define CompressorSubsystem_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class CompressorSubsystem: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Relay* compressorSpike;
	DigitalInput* compressorPressureSwitch;
	CompressorSubsystem();
	void InitDefaultCommand();
	void On();
	void Off();
	bool Pressurized();
};

#endif
