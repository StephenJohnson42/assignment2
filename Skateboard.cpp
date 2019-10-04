

//
// Created by Stephen Johnson 10/3/2019
//

#include "Skateboard.h"
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
	double z = 10.0;
	y = x / z;

    double mileage = y * timex;
    if(timex > 25 && timex < 250){
    	double ranAmount = rand() % (timex / .3333) + 1;
	    mileage = mileage + ranAmount ;
	}
	mileage = floor(mileage);
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}