#ifndef PauseCommand_H
#define PauseCommand_H

#include "../CommandBase.h"
#include "WPILib.h"

class PauseCommand: public CommandBase
{
public:
	PauseCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
