#include "TrainingData.h"

TrainingData::TrainingData(std::string const& inputFile) :filename(inputFile) {

}

int TrainingData::loadData() {
	//	1 -> successfully loaded file
	//	0 -> empty file
	// -1 -> file doesn't exist

	if (filename.empty()) return -1;

	std::fstream inputFile;
	inputFile.open(filename, std::ios::in);

	if (inputFile.is_open()) {
		std::vector<double> rowOfData;
		std::string oneRow, strNumber;

		while (!inputFile.eof()) {
			rowOfData.clear();
			oneRow.clear();
			strNumber.clear();
			std::getline(inputFile, oneRow);

			for (auto oneCharacter : oneRow) {
				if (oneCharacter == '\t') {
					rowOfData.push_back(stod(strNumber));
					strNumber.clear();
				}
				else strNumber += oneCharacter;
			}
			if (strNumber == "2") strNumber = "0";
			else strNumber = "1";
			rowOfData.push_back(stod(strNumber));
			loadedData.push_back(rowOfData);
		}
		if (loadedData.size() == 0) return 0;
		else return 1;
	}
	else return -1;
}

int TrainingData::getSizeOfData() {
	return loadedData.size();
}

int TrainingData::nextOutputValue(double output){
	if (output < 0.5)
		return 0;
	else
		return 1;
}

void TrainingData::splitData(){
	std::vector<double> oneRow;
	for(auto oneRow : loadedData)
	{
		expectedResults.push_back(*oneRow.end()); //last element -> classification
		oneRow.erase(oneRow.end());
		inputData.push_back(oneRow);
	}
}

std::vector<double> TrainingData::getDataFromOneRow(int idx) {
	return loadedData[idx];
}

std::vector<double> TrainingData::getResults(){
	return expectedResults;
}

std::vector<std::vector<double>> TrainingData::getInputs(){
	return inputData;
}
