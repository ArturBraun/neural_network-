#include "Perceptron.h"
#include <vector>

class Layer
{
public:

	Layer(int numberOfNeurons, int numberOfInputsForOnePercepton, bool offsetForFirsLayer = false);
	std::vector<double> getOutputFromThisLayer(std::vector<double>& outputFromPreviousLayer);
	void stepBackward(double MSE, std::vector<double>& inputValues, double learningRate);

private:
	int numberOfNeurons;
	std::vector<Perceptron> neurons;

};

