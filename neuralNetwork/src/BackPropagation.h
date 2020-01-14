#include "TrainingData.h"
#include "NeuralNetwork.h"
#include <string>
#include <memory>
#include <math.h>

class BackPropagation
{
public:

	BackPropagation(std::shared_ptr<NeuralNetwork> pointerNeuralNetwork, std::shared_ptr<TrainingData> pointerTrainingData, double desiredTrainingSetAccuracy, double desiredTrainingSetMSE, double alpha);

	std::string train();
	void runCurrentIteration(std::vector<double>& oneRow, double trainValue);
	double getAccuracy();
	double getMSE();
	double countMSE(double resultFromNetwork, double correctResult);
	void countTrainingSetAccuracy(double outputFromNetwork, double correctValue);

private:
	std::shared_ptr<NeuralNetwork> pNeuralNetwork;
	std::shared_ptr<TrainingData> pTrainingData;
	int currentIteration;
	double expectedTrainingSetAccuracy;
	double expectedTrainingSetMSE;
	double trainingSetAccuracySum;
	double trainingSetAccuracy;
	double trainingSetSumOfMSE;
	double trainingSetMSE;
	int maxIterations;
	double learningRate;
};