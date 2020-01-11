#pragma once
#include <vector>
#include "Layer.h"


class NeuralNetwork
{
public:

	//NeuralNetwork();
	NeuralNetwork(int numberOfLayers, int numberOfInputNeurons);

	void stepForward(const std::vector<double>& Input);
	bool getResult(std::vector<double>& inputValues);

private:
	std::vector<Layer> network; //kontener poszczegolnych warstw

};



