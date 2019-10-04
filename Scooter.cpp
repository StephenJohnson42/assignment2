//
// Created by Stephen Johnson 10/3/2019
//

#include "Scooter.h"
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>     
#include <string>   
#include <cmath>

Skateboard::Skateboard() {
}

Skateboard::~Skateboard() = default;

double Bicycle::mileageEstimate(double timex) {
	srand (time(NULL));
	int x = rand() % 5 + 1;
	double y = 0;
	double z = 5.0;
	y = x / z;

    double mileage = y * timex;
    if(timex > 60 && timex < 200){
    	double ranAmount = rand() % (timex / .5) + 1;
	    mileage = mileage + ranAmount ;
	}
	mileage = floor(mileage);
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Scooter\n\t";
    return "-> Scooter\n" + Vehicle::toString();
}