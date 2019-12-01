#pragma once
#include "Perceptron.h"
#include <vector>

using namespace std;

class Layer
{
	Layer();
	//~Layer();

private:
	vector<Perceptron> neurons;
	int numofNeurons;


};

