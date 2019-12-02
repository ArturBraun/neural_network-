#pragma once
#include "Perceptron.h"
#include <vector>

using namespace std;

class Layer
{
public:

	Layer(int numOfNeurons);
	~Layer();

private:
	vector<Perceptron> neurons;
	int numOfNeurons;


};

