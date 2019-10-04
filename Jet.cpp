//
// Created by Stephen Johnson 10/3/2019
//

#include "Jet.h"


int Jet::getNumberEngines(){
	return numberOfEngines;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Number: " +
           getNumberEngines();
}