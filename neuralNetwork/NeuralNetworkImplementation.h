#pragma once
#include "NeuralNetwork.h"

#include <iostream>
#include <string>
#include <vector>

class NeuralNetworkImplementation
{
public:
	NeuralNetworkImplementation();
	NeuralNetworkImplementation(std::shared_ptr<NeuralNetwork> pointer);
	~NeuralNetworkImplementation();

	string getClassification(vector<double>& inputData);

private:
	std::shared_ptr<NeuralNetwork> pNeuralNetwork;

};

/*NeuralNetwork createNet(string dataName, int numofLayer, string activFunction)
{
	//NeuralNetwork net = new NeuralNetwork(numofLayer);
	//return net;
}*/




