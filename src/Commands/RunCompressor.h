#ifndef RunCompressor_H
#define RunCompressor_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "Commands/Subsystem.h"
#include "../Robot.h"

class RunCompressor: public CommandBase
{
public:
	RunCompressor();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
