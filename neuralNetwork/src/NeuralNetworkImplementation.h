#pragma once
//#include "NeuralNetwork.h"
//#include "TrainingData.h"
#include "BackPropagation.h"

#include <iostream>
#include <string>
#include <vector>

class NeuralNetworkImplementation
{
public:
	NeuralNetworkImplementation(int numberOfLayers, int numberOfInputNeurons, std::string const& dataFilename, double desiredTrainingSetAccuracy, double desiredTrainingSetMSE, double alpha);

	std::string getClassification(std::vector<double>& inputData);
	std::string loadDataAndTrain();

private:
	std::shared_ptr<NeuralNetwork> pNeuralNetwork;
	std::shared_ptr<TrainingData> pTrainingData;
	std::shared_ptr<BackPropagation> pBackPropagation;
};





