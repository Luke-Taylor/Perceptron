#pragma once

#include "Neuron.h"

class Connector{
public:
	Connector(Neuron* left, Neuron* right);
	
	void Connect(Neuron* left, Neuron* right);

	float weight;

private:
	Neuron* _left;
	Neuron* _right;
};