#include "Perceptron.h"
#include <cstdlib>
#include <ctime>
#include <math.h> 

Perceptron::Perceptron(int numberOfInputs)
{
	//generacja losowych wag dla polaczen neurona z przedzialu <-1,1>
	for (int i = 0; i < numberOfInputs; ++i) {
		srand((int)time(0));
		double randomWeight = (double)rand() / RAND_MAX;
		randomWeight = -1 + randomWeight * 2;

		//double randomWeight = -1;

		weightsOfInputs.push_back(randomWeight);
	}
}

double Perceptron::sigmoid(double x) {
	return 1 / (1+exp(-x));
}

double Perceptron::getOutput(std::vector<double>& outputFromPreviousLayer)
{
	double x = 0;
	int i = 0;
	for (i = 0; i < weightsOfInputs.size(); ++i) {
		x += outputFromPreviousLayer[i] * weightsOfInputs[i];
	}
	//x -= outputFromPreviousLayer[i] * weightsOfInputs[i]; //threshold
	return sigmoid(x);
}

void Perceptron::setWeightsOfInputs(std::vector<double>& newWeights) {
	weightsOfInputs = newWeights;
}
