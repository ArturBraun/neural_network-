#pragma once
#include <vector>

class Perceptron
{
public:
	Perceptron(int numberOfInputs, int offsetForFirstLayer = 0);

	double getOutput(std::vector<double>& outputFromPreviousLayer); //output of neuron
	double sigmoid(double x); //sigmoig act function
	double linear(double x); //linear activation function
	double getWeightedInputValue(std::vector<double>& outputFromPreviousLayer); //weighted output from input values

	std::vector<double> getWeights(Perceptron& neuron); 
	void stepBackward(double MSE, std::vector<double>& inputValues, double learningRate); //backpropagation in perceptron

private:
	std::vector<double> weightsOfInputs;
	int offsetForFirstLayer;
};