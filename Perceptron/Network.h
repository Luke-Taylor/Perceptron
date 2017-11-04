#pragma once

#include "Layer.h"

#include <vector>

class Network{
public:
	Network(int sizes[]);

	void Connect();

	std::vector<Layer> layers;
};