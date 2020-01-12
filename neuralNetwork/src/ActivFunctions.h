#include <math.h>

int signum(double x)
{
	return 1;
}

double linear(double x)
{
	return x;
}

double sigmoid(double x)
{
	double temp = 0.5*(1+tanh(0.5*x));
	return temp;
}

int linear_derivative()
{
	return 1;
}

double sigmoid_derivative(double x)
{
	return (1-x)*x;
}