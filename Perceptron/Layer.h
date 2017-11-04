#pragma once

#include "Neuron.h"
#include "Connector.h"

#include <vector>

class Layer{
public:
	Layer(int size);

	void Connect(Neuron* left, Neuron* right);

	std::vector<Neuron> neurons;
	std::vector<Connector> connections;
};