#pragma once
#include <vector>
#include <boost/array.hpp>
#include "Layer.h"


class NeuralNetwork
{
public:

	//NeuralNetwork();
	NeuralNetwork(int numberOfLayers, int numberOfInputNeurons);

	double stepForward(const std::vector<double>& Input);
	void stepBackward(double MSE, const std::vector<double>& inputValues, double learningRate);
	bool getResult(std::vector<double>& inputValues);

private:
	std::vector<Layer> network; //kontener poszczegolnych warstw

};



