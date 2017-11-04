#include "Layer.h"

Layer::Layer(int size){
	for(int i = 0; i < size; i++){
		Neuron neuron;
		neurons.push_back(neuron);
	}
}

void Layer::Connect(Neuron* left, Neuron* right){
	Connector connect(left,right);
	connections.push_back(connect);
}