#include "Connector.h"

Connector::Connector(Neuron* left, Neuron* right){
	this->Connect(left,right);
}

void Connector::Connect(Neuron* left, Neuron* right){
	this->_left = left;
	this->_right = right;
}