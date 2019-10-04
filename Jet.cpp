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
	//Set up the random seed
	srand (time(NULL));
	//Get random num between 40 and 100
	int z = rand() % 100 + 40;
	//Find the mileage
    double mileage = z * timex;
    int x = getNumberEngines();
    //If fuel is rocket and there is more than 2 engines
    if (fuelType == "Rocket" && x > 2) {
        mileage += mileage * 0.055;
    }
    //mileage = floor(mileage);
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