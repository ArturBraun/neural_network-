#pragma once

#include <vector>
#include <QtWidgets/QMainWindow>
#include "ui_GUI.h"
#include "NeuralNetworkImplementation.h"
#include <qstring.h>

class GUI : public QMainWindow
{
	Q_OBJECT

public:
	GUI(shared_ptr<NeuralNetworkImplementation> pointer, QWidget *parent = Q_NULLPTR);

private slots:
	void runProcess(); //odpalanie procesu kwalifikacji dla pobranych danych

private:
	void teachNeuralNetwork(); //uczenie sieci 
	void loadData(); //pobieranie zmiennych z GUI
	void printLogs(string content); //wypisywanie logow w GUI do LogsTextEdit
	void printError(string content); //wypisywanie kominkatach o bledach do LogsTextEdit

	QString Logs; //Przetrzymuje aktualne wszystkie wyswietlone logi
	Ui::GUIClass ui;

// Parameters
	std::vector<double> parameters;
	std::shared_ptr<NeuralNetworkImplementation> pNeuralNetworkImplementation;
};
