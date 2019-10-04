//
// Created by Stephen Johnson 10/3/2019
//

#include "Jet.h"


Jet::Jet() {
    myEngineSize = 1;
}
Jet::Jet(int numEngines, string fuelType) {
	myEngineSize = 1;
	numberOfEngines = numEngines;
	setFuelType(fuelType);
}
Jet::~Jet() = default;

int Jet::getNumberEngines(){
	return numberOfEngines;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Number: " +
           getNumberEngines();
}