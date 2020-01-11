#include "NeuralNetwork.h"

NeuralNetwork::NeuralNetwork(int numberOfLayers, int numberOfInputNeurons)
{
	network.push_back(Layer(numberOfInputNeurons, 1, true));
	for (int i = 1; i < numberOfLayers-1; ++i) {
		network.push_back(Layer(numberOfInputNeurons,numberOfInputNeurons, true));
	}
	network.push_back(Layer(1,numberOfInputNeurons, false));
}

//NeuralNetwork::NeuralNetwork()
//{
//
//}

void NeuralNetwork::stepForward(const std::vector<double>& Input)
{

}

bool NeuralNetwork::getResult(std::vector<double>& inputValues)
{
	std::vector<double> resultsFromLayer = inputValues;
	int i = 0;
	for (i = 0; i < network.size(); ++i) {
		resultsFromLayer = network[i].getOutputFromThisLayer(resultsFromLayer);
	}
	double output = resultsFromLayer[0];

	//	1 -> chory
	//	0 -> zdrowy
	if (output > 0.5) return true;
	else return false;

}