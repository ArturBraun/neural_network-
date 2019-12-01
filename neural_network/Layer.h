#pragma once
#include "Perceptron.h"
#include <vector>

using namespace std;

class Layer
{
public:

	Layer();
	~Layer();

private:
	vector<Perceptron> neurons;
	int numofNeurons;

	
};

