#ifndef AutonVisionTurning_H
#define AutonVisionTurning_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "Nullable.h"
#include "../Robot.h"

class AutonVisionTurning: public CommandBase
{
public:
	AutonVisionTurning();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	Nullable<double> target;
	static const int DESIRED_TARGET = 133;
	static const int UPPER_LIMIT = DESIRED_TARGET + 3;
	static const int LOWER_LIMIT = DESIRED_TARGET - 3;
};

#endif
