#pragma once

class Perceptron
{
public:

	Perceptron();
	~Perceptron();
	void setOutput();
	double getOutput();

private:
	int numofInputs;
};