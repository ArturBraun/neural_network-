#include "NeuralNetworkImplementation.h"

NeuralNetworkImplementation::NeuralNetworkImplementation(int numberOfLayers, int numberOfInputNeurons, std::string const& dataFilename, double desiredTrainingSetAccuracy, double desiredTrainingSetMSE)
	:pNeuralNetwork(new NeuralNetwork(numberOfLayers, numberOfInputNeurons)),
	pTrainingData(new TrainingData(dataFilename)),
	pBackPropagation(new BackPropagation(pTrainingData,desiredTrainingSetAccuracy,desiredTrainingSetMSE))
{

}

std::string NeuralNetworkImplementation::loadDataAndTrain() {
	int loadResult = pTrainingData->loadData();
	if (loadResult == -1) return "Cannot open file with data!";
	if (loadResult == 0) return "The file with data is empty!";

	return "Training data was successfully loaded.\nThe number of data is " + std::to_string(pTrainingData->getSizeOfData()) + " rows.\n\nTraining of neural network is begining...\n";
	//return "Training data was successfully loaded.\nThe number of data is " + std::to_string(pTrainingData->getSizeOfData()) + "rows.\n\nTraining of neural network is begining...\n"+ pBackPropagation->train();
}

std::string NeuralNetworkImplementation::getClassification(std::vector<double>& inputData)
{
	/*
	[0] = Clump Thickness
	[1] = Uniformity of Cell Size
	[2] = Uniformity of Cell Shape
	[3] = Marginal Adhesion
	[4] = Single Epithelial Cell Size
	[5] = Bare Nuclei
	[6] = Bland Chromatin
	[7] = Normal Nucleoli
	[8] = Mitoses
	*/

	bool result = pNeuralNetwork->getResult(inputData);
	if (result) return "malignant";
	else return "benign";

}
