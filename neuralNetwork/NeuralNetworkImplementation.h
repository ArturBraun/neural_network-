#pragma once
#include "NeuralNetwork.h"

#include <string>
#include <vector>

using namespace std;

class NeuralNetworkImplementation
{
public:
	NeuralNetwork* net;
	string getClassification(vector<double>& inputData);

private:


};

/*NeuralNetwork createNet(string dataName, int numofLayer, string activFunction)
{
	//NeuralNetwork net = new NeuralNetwork(numofLayer);
	//return net;
}*/




