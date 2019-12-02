#include "GUI.h"
#include <string>

GUI::GUI(shared_ptr<NeuralNetworkImplementation> pointer, QWidget *parent)
	: pNeuralNetworkImplementation(pointer), QMainWindow(parent)
{
	ui.setupUi(this);

	//utworzenie 10 pozycji w vectorze parameters
	for (int i = 0; i < 10; i++) parameters.push_back(0.0);

	connect(ui.RunProcessPushButton, SIGNAL(released()), this, SLOT(runProcess()));
	//connect(ui.RunProcessPushButton, SIGNAL(clicked()), this, SLOT(runProcess()));
	
	ui.RunProcessPushButton->setEnabled(false);
	teachNeuralNetwork();
	ui.RunProcessPushButton->setEnabled(true);
}

void GUI::teachNeuralNetwork()
{
	printLogs("Learning of neural network has begun");
	for (int i = 0; i < 10; i++) printLogs("Learning...");
	printLogs("Learning of neural network has ended");
}

void GUI::printLogs(string content)
{
	ui.LogsTextEdit->append(QString::fromStdString(content));
}

void GUI::printError(string content)
{

}

void GUI::loadData()
{
	QString data;
	/*
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

	data = ui.RadiusLineEdit->text();
	parameters[0] = data.toDouble();

	data = ui.TextureLineEdit->text();
	parameters[1] = data.toDouble();

	data = ui.PerimeterLineEdit->text();
	parameters[2] = data.toDouble();

	data = ui.AreaLineEdit->text();
	parameters[3] = data.toDouble();

	data = ui.SmoothnessLineEdit->text();
	parameters[4] = data.toDouble();

	data = ui.CompactnessLineEdit->text();
	parameters[5] = data.toDouble();

	data = ui.ConcavityLineEdit->text();
	parameters[6] = data.toDouble();

	data = ui.ConcavePointsLineEdit->text();
	parameters[7] = data.toDouble();

	data = ui.SymmetryLineEdit->text();
	parameters[8] = data.toDouble();

	data = ui.FractalDimensionLineEdit->text();
	parameters[9] = data.toDouble();
}

void GUI::runProcess()
{
	loadData();
	string result = pNeuralNetworkImplementation->getClassification(parameters);
	printLogs("Patient is " + result + ".");

}



