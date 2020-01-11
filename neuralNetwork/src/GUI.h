#pragma once

#include <vector>
#include <QtWidgets/QMainWindow>
#include "GUI1.h"
#include "NeuralNetworkImplementation.h"
#include <qstring.h>

class GUI : public QMainWindow
{
	Q_OBJECT

public:
	GUI(std::shared_ptr<NeuralNetworkImplementation> pointer, QWidget *parent = Q_NULLPTR);

	void printLogs(std::string content); //wypisywanie logow w GUI do LogsTextEdit
	void printError(std::string content); //wypisywanie kominkatach o bledach do LogsTextEdit

private slots:
	void runProcess(); //odpalanie procesu kwalifikacji dla pobranych danych
	void clearLogs();
	void newFile();

private:

	QString Logs; //Przetrzymuje aktualne wszystkie wyswietlone logi
	Ui::GUIClass ui;

// Parameters
	std::vector<double> parameters;
	std::shared_ptr<NeuralNetworkImplementation> pNeuralNetworkImplementation;
};
