#include "TrainingData.h"

int TrainingData::nextOutputValue(double output)
{
	if (output < 0.5)
		return 0;
	else
		return 1;
}
