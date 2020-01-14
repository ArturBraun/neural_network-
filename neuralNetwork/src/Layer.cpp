#include "Layer.h"

Layer::Layer(int numberOfNeurons, int numberOfInputsForOnePercepton, bool offsetForFirsLayer)
	:numberOfNeurons(numberOfNeurons)
{
	if (offsetForFirsLayer) {
		for (int i = 0; i < numberOfNeurons; ++i) {
			neurons.push_back(Perceptron(numberOfInputsForOnePercepton, i));
		}
	}
	else {
		for (int i = 0; i < numberOfNeurons; ++i) {
			neurons.push_back(Perceptron(numberOfInputsForOnePercepton));
		}
	}
}

std::vector<double> Layer::getOutputFromThisLayer(std::vector<double>& outputFromPreviousLayer) {
	std::vector<double> resultsFromThisLayer;

	for (int i = 0; i < neurons.size(); ++i) {
		resultsFromThisLayer.push_back(neurons[i].getOutput(outputFromPreviousLayer));
	}

	return resultsFromThisLayer;
}
//backpropagation in layer
void Layer::stepBackward(double MSE, std::vector<double>& inputValues, double learningRate) {

	for (auto& oneNeuron : neurons) {
		oneNeuron.stepBackward(MSE, inputValues, learningRate);
	}
}
