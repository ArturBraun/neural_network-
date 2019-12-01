#include "NeuralNetworkImplementation.h"

string NeuralNetworkImplementation::getClassification(vector<double>& inputData)
{
	if (*inputData.end() < 0.5)
		return "zdrowy";
	else
		return "chory";

}
