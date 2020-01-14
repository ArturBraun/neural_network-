#include "NeuralNetwork.h"

NeuralNetwork::NeuralNetwork(int numberOfLayers, int numberOfInputNeurons)
{
	network.push_back(Layer(numberOfInputNeurons, 1, true));
	for (int i = 1; i < numberOfLayers - 1; ++i) {
		network.push_back(Layer(numberOfInputNeurons, numberOfInputNeurons));
	}
	network.push_back(Layer(1, numberOfInputNeurons));
}

//function returns activation of output layer
double NeuralNetwork::stepForward(const std::vector<double>& inputValues)
{
	std::vector<double> resultsFromLayer = inputValues;

	for (auto oneLayer : network) {
		resultsFromLayer = oneLayer.getOutputFromThisLayer(resultsFromLayer);
	}

	double output = resultsFromLayer[0];
	return output;
}
//backpropagation in network
void NeuralNetwork::stepBackward(double MSE, const std::vector<double>& inputValues, double learningRate) {
	std::vector<double> resultsFromLayer = inputValues;

	for (auto& oneLayer : network) {
		oneLayer.stepBackward(MSE, resultsFromLayer, learningRate);
		resultsFromLayer = oneLayer.getOutputFromThisLayer(resultsFromLayer);
	}
}

bool NeuralNetwork::getResult(std::vector<double>& inputValues)
{
	double output = stepForward(inputValues);

	if (output > 0.45) return true;
	else return false;

}