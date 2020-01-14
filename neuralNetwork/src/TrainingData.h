#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


class TrainingData
{
public:

	TrainingData(std::string const& filename);

	int loadData(); //laduje dane z pliku do uczenia sieci

	int getSizeOfData(); //zwraca liczbe zaladowanych wierszy z pliku

	//unsigned nextInputVector(std::vector<double>& input); // dane wejsciowe do sieci
	int nextOutputValue(double output); //wartosc oczekiwana na wyjsciu

	std::vector<double> getDataFromOneRow(int idx); //zwraca jeden wiersz danych do uczenia

	void splitData(); //podzial danych na wejsciowe i wyjsciowe
	std::vector<double> getResults(); //zwraca wektor danych wyjsciowych
	std::vector<std::vector<double>> getInputs(); //zwraca dane wejsciowe

private:
	std::string filename;
	//std::vector<int> rowOfData;


	// Kazdy element tego wektora to pobrane dane z pliku z jednego rzedu w ponizszej kolejnosci
	// np. loadedData[0][0] -> oznacza parametr Clump Thickness z 1 rzedu danych z pliku
	std::vector<std::vector<double>> loadedData;
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
	[9] = Class -> (0 for benign, 1 for malignant)
	*/

	std::vector<std::vector<double>> inputData;
	std::vector<double> expectedResults;

	std::ifstream 	trainingDataFile;
};




