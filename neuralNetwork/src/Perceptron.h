#pragma once
#include <vector>

class Perceptron
{
public:
	Perceptron(int numberOfInputs, int offsetForFirstLayer = 0);

	double getOutput(std::vector<double>& outputFromPreviousLayer); //Zwraca wynik perceptona
	double sigmoid(double x); //funkcja aktywacji
	double getWeightedInputValue(std::vector<double>& outputFromPreviousLayer); //Zwraca wartosc sumy wazonej wartosci z polaczen neurona

	std::vector<double> getWeights(Perceptron& neuron); //Zwraca aktualne wagi polaczen w perceptonie
	void stepBackward(double MSE, std::vector<double>& inputValues, double learningRate); //Ustawienie wag zgodnie z algorytmem backpropagation

private:
	std::vector<double> weightsOfInputs;
	int offsetForFirstLayer;
};