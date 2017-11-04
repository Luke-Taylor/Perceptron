#pragma once

#include "Pixel.h"

#include <vector>

class Bitmap{
public:
	Bitmap(char* path);

	std::vector<std::vector<Pixel>> pixels;
};