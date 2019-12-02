#pragma once

class Perceptron
{
public:
	Perceptron(int numOfInputs);
	~Perceptron();
	void setOutput();
	double getOutput();

private:
	int numberOfInputs;
};