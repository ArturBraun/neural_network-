#pragma once

class BaseCustomException : public std::exception 
{
public:
	virtual std::pair<char*, char*> getMessage() 
	{
		std::pair<char*, char*> titleAndMessage("Error!", "The application is closing...");
		return titleAndMessage;
	}
};

class CannotFindFile : public BaseCustomException 
{
public:
	std::pair<char*, char*> getMessage() {
		std::pair<char*, char*> titleAndMessage("Error with data file!", "Cannot find the file DataForLearning.txt in the src folder!\nThe application is closing...");
		return titleAndMessage;
	}
};

class EmptyFile : public BaseCustomException 
{
public:
	std::pair<char*, char*> getMessage() {
		std::pair<char*, char*> titleAndMessage("Error with data file!", "The file DataForLearning.txt is empty! Cannot train the Neural Network.\nThe application is closing...");
		return titleAndMessage;
	}
};