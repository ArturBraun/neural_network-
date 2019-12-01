#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class TrainingData
{
public:
	//TrainingData();
	//TrainingData(string fileName); //otwarcie pliku
	unsigned nextInputVector(vector<double>& input); // dane wejsciowe do sieci
	int nextOutputValue(double output); //wartosc oczekiwana na wyjsciu

private:
	ifstream 	trainingDataFile;
};




