#include "GUI.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include <cassert>
#include "NeuralNetworkImplementation.h"
#include "TrainingData.h"
#include "BackPropagation.h"

//class NeuralNetworkImplementation;
//class TrainingData;
//int test();


int main(int argc, char* argv[])
{
	//test();

	std::shared_ptr<NeuralNetworkImplementation> pNeuralNetworkImplementation (new NeuralNetworkImplementation(3, 9, "DataForLearning.txt", 90.0, 0.1));
	QApplication a(argc, argv);
	GUI gui(pNeuralNetworkImplementation);
	gui.printLogs(pNeuralNetworkImplementation->loadDataAndTrain());

	gui.show();
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
