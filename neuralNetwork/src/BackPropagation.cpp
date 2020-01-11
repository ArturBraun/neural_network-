#include "BackPropagation.h"

BackPropagation::BackPropagation(std::shared_ptr<TrainingData> pointerTrainingData, double desiredTrainingSetAccuracy, double desiredTrainingSetMSE)
	:pTrainingData(pointerTrainingData),
	currentIteration(0),
	expectedTrainingSetAccuracy(desiredTrainingSetAccuracy),
	expectedTrainingSetMSE(desiredTrainingSetMSE)
{

}

std::string BackPropagation::train() {
	std::string logsFromTraining;
	trainingSetAccuracy = 10;
	trainingSetMSE = 10;
	currentIteration = 0;

	while (trainingSetAccuracy > expectedTrainingSetAccuracy || trainingSetMSE > expectedTrainingSetMSE) {
		runCurrentIteration();
		getAccuracyAndMSE();
		++currentIteration;

		logsFromTraining += "For " + std::to_string(currentIteration) + ". iteration trainingSetAccuracy was " + std::to_string(trainingSetAccuracy) + " and MSE was " + std::to_string(trainingSetMSE) + ".\n";
	}
	logsFromTraining += "\nLearning of Neural Network has successfully finished!\nThe number of iterations was " + std::to_string(currentIteration) + ".\nFinal trainingSetAccuracy is " + std::to_string(trainingSetAccuracy) + " and MSE is " + std::to_string(trainingSetMSE) + ".\n\n";
	
	return logsFromTraining;
}

void BackPropagation::runCurrentIteration() {

}

void BackPropagation::getAccuracyAndMSE() {

}








//void stepBackward(std::shared_ptr<TrainingData> pTrainingData)
//{
//
//}
