#include "Bitmap.h"

Bitmap::Bitmap(char* filename){
	int i;
	FILE* f = fopen(filename, "rb");
	unsigned char info[54];
	fread(info, sizeof(unsigned char), 54, f);

	int width = *(int*)&info[18];
	int height = *(int*)&info[22];

	int size = 3 * width * height;
	unsigned char* data = new unsigned char[size];
	fread(data, sizeof(unsigned char), size, f);
	fclose(f);

	for(int y = 0; y < height * 3; y += 3){
		pixels.push_back(std::vector<Pixel>());
		for(int x = 0; x < width * 3; x += 3){
			Pixel pixel(data[i + 2], data[i + 1], data[i]);
			pixels[y].push_back(pixel);
		}
	}
}