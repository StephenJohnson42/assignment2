//
// Created by Stephen Johnson 10/3/2019
//

#include "Scooter.h"
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>     
//#include <string>   
#include <cmath>

Scooter::Scooter(string brand, string model) {
	setBrand(brand);
    setModel(model);
}

Scooter::~Scooter() = default;

double Scooter::mileageEstimate(double timex) {
	srand (time(NULL));
	int x = rand() % 5 + 1;
	double y = 0;
	double z = 5.0;
	y = x / z;

    double mileage = y * timex;
    int compare = floor(timex);
    if(compare % 2 == 0){
    	double ranAmount = rand() % (int)(timex / .5) + 1;
	    mileage = mileage + ranAmount ;
	}
	mileage = floor(mileage);
    return mileage;
}

string Scooter::toString() {
    string s = "-> Scooter\n\t";
    return "-> Scooter\n" + Vehicle::toString();
}