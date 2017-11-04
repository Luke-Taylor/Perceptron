#include "Maths.h"

#include <math.h>

double Maths::Sigmoid(double x){
	return 1 / (1 + exp(-x));
}

double Maths::Derivative(double x){
	double s = Sigmoid(x);
	return s * (-1 / s);
}