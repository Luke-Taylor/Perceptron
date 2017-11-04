#include "Connector.h"

Connector::Connector(Neuron* left, Neuron* right){
	Connect(left,right);
}

void Connector::Connect(Neuron* left, Neuron* right){
	_left = left;
	_right = right;
}