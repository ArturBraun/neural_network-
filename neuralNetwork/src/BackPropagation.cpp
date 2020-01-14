#include "BackPropagation.h"

BackPropagation::BackPropagation(std::shared_ptr<TrainingData> pointerTrainingData, double desiredTrainingSetAccuracy, double desiredTrainingSetMSE, double alpha)
	:pTrainingData(pointerTrainingData),
	currentIteration(0),
	expectedTrainingSetAccuracy(desiredTrainingSetAccuracy),
	expectedTrainingSetMSE(desiredTrainingSetMSE),
	learningRate(alpha)
{

}

std::string BackPropagation::train(NeuralNetwork& network) {
	std::string logsFromTraining;
	trainingSetAccuracy = 10;
	trainingSetMSE = 10;
	currentIteration = 0;
	learningRate = 0.1;

	pTrainingData->splitData();
	std::vector<std::vector<double>> data = pTrainingData->getInputs();
	
	for(auto it : data){
		while (trainingSetAccuracy > expectedTrainingSetAccuracy || trainingSetMSE > expectedTrainingSetMSE || currentIteration > maxIterations) {
			runCurrentIteration(network, it);
			++currentIteration;

			logsFromTraining += "For " + std::to_string(currentIteration) + ". iteration trainingSetAccuracy was " + std::to_string(trainingSetAccuracy) + " and MSE was " + std::to_string(trainingSetMSE) + ".\n";
		}
	}
	logsFromTraining += "\nLearning of Neural Network has successfully finished!\nThe number of iterations was " + std::to_string(currentIteration) + ".\nFinal trainingSetAccuracy is " + std::to_string(trainingSetAccuracy) + " and MSE is " + std::to_string(trainingSetMSE) + ".\n\n";
	
	return logsFromTraining;
}

void BackPropagation::runCurrentIteration(NeuralNetwork& network, std::vector<double>& oneRow, double trainValue) {
	double output = network.stepForward(oneRow);
	network.stepBackward(countMSE(output,trainValue));
}

double BackPropagation::getAccuracy(){
	return trainingSetAccuracy;
}

double BackPropagation::getMSE(){
	return trainingSetMSE;
}

double BackPropagation::countMSE(double output, double trainingValue){
	trainingSetMSE = (pow((output - trainingValue),2))/2;
	return trainingSetMSE;
}

