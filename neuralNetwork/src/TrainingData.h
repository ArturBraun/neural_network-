#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


class TrainingData
{
public:

	TrainingData(std::string const& filename);
	int loadData();
	int getSizeOfData();

	unsigned nextInputVector(std::vector<double>& input); // dane wejsciowe do sieci
	int nextOutputValue(double output); //wartosc oczekiwana na wyjsciu

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
	[9] = Class -> (2 for benign, 4 for malignant)
	*/

	std::ifstream 	trainingDataFile;
};




