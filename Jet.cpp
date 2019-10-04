//
// Created by Stephen Johnson 10/3/2019
//

#include "Jet.h"
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>     
#include <string>   
#include <cmath>

Jet::Jet() {
    numberOfEngines = 1;
}
Jet::Jet(string brand, string model, string fuelType, int numEngines) {
	setBrand(brand);
    setModel(model);
	
	numberOfEngines = numEngines;
	setFuelType(fuelType);
}
Jet::~Jet() = default;

double Jet::mileageEstimate(double timex) {
	srand (time(NULL));
	int z = rand() % 100 + 40;
    double mileage = z * timex;
    int x = getNumberEngines();
    if (fuelType == "Rocket" && x > 2) {
        mileage += mileage * 0.055;
    }
    mileage = floor(mileage);
    return mileage;
}

int Jet::getNumberEngines(){
	return numberOfEngines;
}

string Jet::toString() {
	string temp = std::to_string(getNumberEngines());
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Number: " +
           temp;
}