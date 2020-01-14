#include "TrainingData.h"
#include "NeuralNetwork.h"
#include <string>
#include <memory>
#include <math.h>

class BackPropagation
{
public:

	BackPropagation(std::shared_ptr<TrainingData> pointerTrainingData, double desiredTrainingSetAccuracy, double desiredTrainingSetMSE, double alpha);

	std::string train(NeuralNetwork& Network);
	void runCurrentIteration(NeuralNetwork& Network, std::vector<double>& oneRow,double trainValue);
	double getAccuracy();
	double getMSE();
	double countMSE(double output, double trainingValue);

private:
	std::shared_ptr<TrainingData> pTrainingData;
	int currentIteration;
	double expectedTrainingSetAccuracy;
	double expectedTrainingSetMSE;
	double trainingSetAccuracy;
	double trainingSetMSE;
	int maxIterations;
	double learningRate;
};