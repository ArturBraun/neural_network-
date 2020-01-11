#include "Layer.h"

Layer::Layer(int numberOfNeurons, int numberOfInputsForOnePercepton, bool threshold)
	:numberOfNeurons(numberOfNeurons)
{
	for (int i = 0; i < numberOfNeurons; ++i) {
		neurons.push_back(Perceptron(numberOfInputsForOnePercepton));
	}

	//if (threshold) neurons.push_back(Perceptron(0)); //threshold percepton

}

std::vector<double> Layer::getOutputFromThisLayer(std::vector<double>& outputFromPreviousLayer) {
	std::vector<double> resultsFromThisLayer;

	for (int i = 0; i < neurons.size(); ++i) {
		resultsFromThisLayer.push_back(neurons[i].getOutput(outputFromPreviousLayer));
	}

	return resultsFromThisLayer;
}
