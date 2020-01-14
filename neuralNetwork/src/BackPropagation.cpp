#include "BackPropagation.h"

BackPropagation::BackPropagation(std::shared_ptr<NeuralNetwork> pointerNeuralNetwork, std::shared_ptr<TrainingData> pointerTrainingData, double desiredTrainingSetAccuracy, double desiredTrainingSetMSE, double alpha)
	: pNeuralNetwork(pointerNeuralNetwork),
	pTrainingData(pointerTrainingData),
	currentIteration(0),
	trainingSetAccuracySum(0),
	expectedTrainingSetAccuracy(desiredTrainingSetAccuracy),
	expectedTrainingSetMSE(desiredTrainingSetMSE),
	learningRate(alpha),
	trainingSetMSE(0),
	trainingSetSumOfMSE(0),
	trainingSetAccuracy(0)
{

}

std::string BackPropagation::train() {
	std::vector<double> dataFromOneRow;
	double correctResult = 0;
	std::string logsFromTraining;
	//trainingSetAccuracy = 10;
	//trainingSetMSE = 10;
	learningRate = 0.1;

	int epoch = 0;
	while (epoch < 10) {
		for (int numberOfRow = 0; numberOfRow < pTrainingData->getSizeOfData(); ++numberOfRow) {
			++currentIteration;
			// vector of one row of DATA:
			// [0] - [8] -> parameters
			// [9] = expected result -> (0 for benign, 1 for malignant)
			dataFromOneRow = pTrainingData->getDataFromOneRow(numberOfRow);
			correctResult = dataFromOneRow.back();
			dataFromOneRow.pop_back();
				
			runCurrentIteration(dataFromOneRow, correctResult);


			logsFromTraining += "For " + std::to_string(currentIteration) + ". iteration trainingSetAccuracy was " + std::to_string(trainingSetAccuracy) + "% and MSE was " + std::to_string(trainingSetMSE) + ".\n";
		}
		++epoch;
	}

	logsFromTraining += "\n-------------------------------------------------------------------------------------------------------------\nLearning of Neural Network has successfully finished!\nThe number of iterations was "\
		+ std::to_string(currentIteration) + ".\nFinal trainingSetAccuracy is " + std::to_string(trainingSetAccuracy)\
		+ " and MSE is " + std::to_string(trainingSetMSE) + \
		".\n-------------------------------------------------------------------------------------------------------------\n\n";

	return logsFromTraining;
}

void BackPropagation::runCurrentIteration(std::vector<double>& oneRow, double correctValue) {
	double outputFromNetwork = pNeuralNetwork->stepForward(oneRow);
	countTrainingSetAccuracy(outputFromNetwork, correctValue);
	pNeuralNetwork->stepBackward(countMSE(outputFromNetwork, correctValue), oneRow, learningRate);
}

void BackPropagation::countTrainingSetAccuracy(double outputFromNetwork, double correctValue) {
	if (outputFromNetwork > 0.5) outputFromNetwork = 1.0;
	else outputFromNetwork = 0.0;

	if (outputFromNetwork == correctValue) ++trainingSetAccuracySum;
	trainingSetAccuracy = 100 * trainingSetAccuracySum / currentIteration;
}

double BackPropagation::getAccuracy() {
	return trainingSetAccuracy;
}

double BackPropagation::getMSE() {
	return trainingSetMSE;
}

//double BackPropagation::countMSE(double output, double trainingValue){
//	trainingSetMSE += (pow((output - trainingValue),2))/2;
//	return trainingSetMSE;
//}

double BackPropagation::countMSE(double resultFromNetwork, double correctResult) {
	trainingSetSumOfMSE += (pow((resultFromNetwork - correctResult), 2)) / 2;
	trainingSetMSE = (pow((resultFromNetwork-correctResult),2)/2);//trainingSetSumOfMSE / ((double)currentIteration);

	return trainingSetMSE;
}

