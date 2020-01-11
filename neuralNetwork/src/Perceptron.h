#pragma once
#include <vector>

class Perceptron
{
public:
	Perceptron(int numberOfInputs);

	double getOutput(std::vector<double>& outputFromPreviousLayer);
	double sigmoid(double x);

	void setWeightsOfInputs(std::vector<double>& newWeights);

private:
	//int numberOfInputs;
	std::vector<double> weightsOfInputs;
};