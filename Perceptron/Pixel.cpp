#include "Pixel.h"

Pixel::Pixel(int red, int green, int blue) : R(red), G(green), B(blue){
}

int Pixel::GetGrayscale(){
	return (0.3 * R) + (0.59 * G) + (0.11 * B);
}