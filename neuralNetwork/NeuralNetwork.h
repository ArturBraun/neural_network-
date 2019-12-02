#pragma once
#include <vector>
#include "Layer.h"


class NeuralNetwork
{
public:

	NeuralNetwork(int layers);

	void stepForward(const vector<double>& Input);
	int getResult();

private:
	vector<Layer> network; //kontener poszczegolnych warstw

};



