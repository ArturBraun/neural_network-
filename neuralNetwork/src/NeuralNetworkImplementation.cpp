#include "NeuralNetworkImplementation.h"

NeuralNetworkImplementation::NeuralNetworkImplementation()
{

}

NeuralNetworkImplementation::NeuralNetworkImplementation(std::shared_ptr<NeuralNetwork> pointer)
	: pNeuralNetwork(pointer)
{

}

NeuralNetworkImplementation::~NeuralNetworkImplementation()
{

}

string NeuralNetworkImplementation::getClassification(vector<double>& inputData)
{
	/*
	Kolejnosc parametrow do klasyfikacji:
	[0] = radius;
	[1] = texture;
	[2] = perimeter;
	[3] = area;
	[4] = smoothness;
	[5] = compactness;
	[6] = concavity;
	[7] = concavePoints;
	[8] = symmetry;
	[9] = fractalDimension;
	*/


	//if (*inputData.end() < 0.5)
	//	return "zdrowy";
	//else
	//	return "chory";

	return "healthy";

}
