
float myMap(float input, float lowIn, float highIn, float lowOut, float highOut){
	return (((input - lowIn) * (highOut - lowOut))/(highIn - lowIn))+lowOut;
}
