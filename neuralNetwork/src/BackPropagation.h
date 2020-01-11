#pragma once
#include "TrainingData.h"
#include <string>

class BackPropagation
{
public:

	BackPropagation(std::shared_ptr<TrainingData> pointerTrainingData, double desiredTrainingSetAccuracy, double desiredTrainingSetMSE);

	std::string train();
	void runCurrentIteration();
	void getAccuracyAndMSE();

private:
	std::shared_ptr<TrainingData> pTrainingData;
	int currentIteration;
	double expectedTrainingSetAccuracy;
	double expectedTrainingSetMSE;
	double trainingSetAccuracy;
	double trainingSetMSE;
};