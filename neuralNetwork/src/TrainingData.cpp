#include "TrainingData.h"

TrainingData::TrainingData(std::string const& inputFile) :filename(inputFile) {

}

int TrainingData::loadData() {
	//	1 -> powodzenie ladowania danych
	//	0 -> pusty plik
	// -1 -> pusta sciezka do pliku, brak pliku z danymi w folderze

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

int TrainingData::nextOutputValue(double output)
{
	if (output < 0.5)
		return 0;
	else
		return 1;
}
