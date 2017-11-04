#include "Network.h"

Network::Network(int sizes[]){
	for(int i = 0; i < sizeof(sizes); i++){
		Layer layer(sizes[i]);
		layers.push_back(layer);
	}
	Connect();
}

void Network::Connect(){
	for(int i = 1; i < layers.size(); i++){
		for(int n = 0; n < layers[i - 1].neurons.size(); n++){
			for(int x = 0; x < layers[i].neurons.size(); x++){
				layers[i - 1].Connect(&layers[i - 1].neurons[n], &layers[i].neurons[x]);
			}
		}
	}
}