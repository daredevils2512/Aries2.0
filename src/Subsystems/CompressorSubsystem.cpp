#include <Subsystems/CompressorSubsystem.h>
#include "../RobotMap.h"
#include "../Commands/RunCompressor.h"

CompressorSubsystem::CompressorSubsystem() : Subsystem("CompressorSubsystem")
{
	compressorSpike = RobotMap::compressorSubsystemCompressorSpike;
	compressorPressureSwitch = RobotMap::compressorSubsystemCompressorPressureSwitch;
}

void CompressorSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new RunCompressor());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void CompressorSubsystem::On() {
//	compressor1->Start();
	compressorSpike->Set(Relay::kForward);
}
void CompressorSubsystem::Off() {
//	compressor1->Stop();
	compressorSpike->Set(Relay::kOff);
}
bool CompressorSubsystem::Pressurized() {
	return compressorPressureSwitch->Get();
}
