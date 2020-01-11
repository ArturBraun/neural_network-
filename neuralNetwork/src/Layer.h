#pragma once
#include "Perceptron.h"
#include <vector>

class Layer
{
public:

	Layer(int numberOfNeurons, int numberOfInputsForOnePercepton, bool threshold);
	std::vector<double> getOutputFromThisLayer(std::vector<double>& outputFromPreviousLayer);
	//~Layer();

private:
	std::vector<Perceptron> neurons;
	int numberOfNeurons;


};

