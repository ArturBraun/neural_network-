#include "Perceptron.h"
#include <cstdlib>
#include <ctime>
#include <math.h> 

Perceptron::Perceptron(int numberOfInputs, int offsetForFirstLayer)
	:offsetForFirstLayer(offsetForFirstLayer)
{
	//generacja losowych wag dla polaczen neuronu z przedzialu <-1,1>
	for (int i = 0; i < numberOfInputs; ++i) {
		//srand((int)time(0));
		//double randomWeight = (double)rand() / RAND_MAX;
		//randomWeight = -1 + randomWeight * 2;

		double randomWeight = -1;

		weightsOfInputs.push_back(randomWeight);
	}
}

double Perceptron::sigmoid(double x) {
	return 1 / (1+exp(-x));
}

double Perceptron::linear(double x){
	return x;
}

double Perceptron::getOutput(std::vector<double>& outputFromPreviousLayer)
{
	return sigmoid(getWeightedInputValue(outputFromPreviousLayer));
}

void Perceptron::stepBackward(double MSE, std::vector<double>& inputValues, double learningRate) {
	//for (auto& oneWeight : weightsOfInputs) {
	//	oneWeight -= learningRate * MSE * getWeightedInputValue(inputValues);
	//}
	for (int i = 0; i < weightsOfInputs.size(); ++i) {
		weightsOfInputs[i] -= learningRate * MSE * getWeightedInputValue(inputValues);
	}
}

double Perceptron::getWeightedInputValue(std::vector<double>& outputFromPreviousLayer) {
	double x = 0;
	for (int i = 0; i < weightsOfInputs.size(); ++i) {
		x += outputFromPreviousLayer[i + offsetForFirstLayer] * weightsOfInputs[i];
	}
	return x;
}

std::vector<double> Perceptron::getWeights(Perceptron& neuron)
{
	return neuron.weightsOfInputs;
}
