#include "GUI.h"
#include <string>
#include <qmessagebox.h>
#include <stdlib.h>

GUI::GUI(std::shared_ptr<NeuralNetworkImplementation> pointer, QWidget* parent)
	: pNeuralNetworkImplementation(pointer), QMainWindow(parent)
{
	ui.setupUi(this);
	parameters = {};

	connect(ui.RunProcessPushButton, SIGNAL(released()), this, SLOT(runProcess()));
	connect(ui.ClearLogsPushButton, SIGNAL(released()), this, SLOT(clearLogs()));
	connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(newFile()));
}

void GUI::newFile() {
	ui.ClumpThicknessLineEdit->clear();
	ui.CellSizeLineEdit->clear();
	ui.CellShapeLineEdit->clear();
	ui.MarginalAdhesionLineEdit->clear();
	ui.EpithelialCellSizeLineEdit->clear();
	ui.BareNucleiLineEdit->clear();
	ui.BlandChromatinLineEdit->clear();
	ui.NormalNucleoliLineEdit->clear();
	ui.MitosesLineEdit->clear();
	ui.LogsTextEdit->clear();
}

void GUI::runErrorMessageBox(std::pair<char*, char*> titleAndMessage) {
	QMessageBox::StandardButton errorWithData;
	errorWithData = QMessageBox::critical(this, tr(titleAndMessage.first),
		tr(titleAndMessage.second),
		QMessageBox::Ok);
}

void GUI::clearLogs() {
	ui.LogsTextEdit->clear();
}

void GUI::printLogs(std::string content)
{
	ui.LogsTextEdit->append(QString::fromStdString(content));
}

void GUI::printError(std::string content)
{
	ui.LogsTextEdit->setTextColor(QColor("red"));
	ui.LogsTextEdit->append(QString::fromStdString(content));
	ui.LogsTextEdit->setTextColor(QColor("black"));
}

void GUI::runProcess()
{
	QString data;
	/*
	[0] = Clump Thickness
	[1] = Uniformity of Cell Size
	[2] = Uniformity of Cell Shape
	[3] = Marginal Adhesion
	[4] = Single Epithelial Cell Size
	[5] = Bare Nuclei
	[6] = Bland Chromatin
	[7] = Normal Nucleoli
	[8] = Mitoses
	*/

	parameters.clear();

	data = ui.ClumpThicknessLineEdit->text();
	if (data.isEmpty()) {
		printError("ERROR -> One of parameters is empty!");
		return;
	}
	parameters.push_back(data.toDouble());

	data = ui.CellSizeLineEdit->text();
	if (data.isEmpty()) {
		printError("ERROR -> One of parameters is empty!");
		return;
	}
	parameters.push_back(data.toDouble());

	data = ui.CellShapeLineEdit->text();
	if (data.isEmpty()) {
		printError("ERROR -> One of parameters is empty!");
		return;
	}
	parameters.push_back(data.toDouble());

	data = ui.MarginalAdhesionLineEdit->text();
	if (data.isEmpty()) {
		printError("ERROR -> One of parameters is empty!");
		return;
	}
	parameters.push_back(data.toDouble());

	data = ui.EpithelialCellSizeLineEdit->text();
	if (data.isEmpty()) {
		printError("ERROR -> One of parameters is empty!");
		return;
	}
	parameters.push_back(data.toDouble());

	data = ui.BareNucleiLineEdit->text();
	if (data.isEmpty()) {
		printError("ERROR -> One of parameters is empty!");
		return;
	}
	parameters.push_back(data.toDouble());

	data = ui.BlandChromatinLineEdit->text();
	if (data.isEmpty()) {
		printError("ERROR -> One of parameters is empty!");
		return;
	}
	parameters.push_back(data.toDouble());

	data = ui.NormalNucleoliLineEdit->text();
	if (data.isEmpty()) {
		printError("ERROR -> One of parameters is empty!");
		return;
	}
	parameters.push_back(data.toDouble());

	data = ui.MitosesLineEdit->text();
	if (data.isEmpty()) {
		printError("ERROR -> One of parameters is empty!");
		return;
	}
	parameters.push_back(data.toDouble());

	for (auto tmpValue : parameters) {
		if (tmpValue < 1 || tmpValue > 10) {
			printError("ERROR -> Parameters must belong to <1;10> domain!");
			return;
		}
	}

	std::string result = pNeuralNetworkImplementation->getClassification(parameters);
	printLogs("Patient tumor is " + result + ".");

}



