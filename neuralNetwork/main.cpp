#include "GUI.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include <cassert>
#include "NeuralNetworkImplementation.h"
#include "TrainingData.h"

using namespace std;

//class NeuralNetworkImplementation;
//class TrainingData;
//int test();

int main(int argc, char* argv[])
{
	//test();

	shared_ptr<NeuralNetworkImplementation> pNeuralNetworkImplementation (new NeuralNetworkImplementation);
	shared_ptr<TrainingData> pTrainingData (new TrainingData);

	QApplication a(argc, argv);
	GUI gui_(pNeuralNetworkImplementation);

	gui_.show();
	return a.exec();

}

//int test()
//{
//	vector<double> data;
//	data.push_back(0.3);
//	data.push_back(0.4);
//	data.push_back(0.5);
//	data.push_back(0.6);
//
//	NeuralNetworkImplementation* impl = new NeuralNetworkImplementation;
//	TrainingData* train = new TrainingData;
//
//	//if (impl->NeuralNetworkImplementation::getClassification(data) == "zdrowy")
//	//{
//	//	assert((train->nextOutputValue(*data.end()) == 1));
//	//}
//	//else
//	//	assert((train->nextOutputValue(*data.end()) == 0));
//
//	return 0;
//}
