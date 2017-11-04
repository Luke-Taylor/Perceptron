#pragma once

class Pixel{
public:
	Pixel(int red, int green, int blue);

	int GetGrayscale();

	int R;
	int G;
	int B;
};