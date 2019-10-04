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
	//Set up the random seed
	srand (time(NULL));
	//Get number between 2 and 6
	int x = rand() % 6 + 2;
	double y = 0;
	double z = 5.0;
	//Divide that number by 5
	y = x / z;
    double mileage = y * timex;
    int compare = floor(timex);
    //If the mileage is an even number then it goes farther based on the time and a random number
    if(compare % 2 == 0){
    	double ranAmount = rand() % (int)(timex / .5) + 1;
	    mileage = mileage + ranAmount ;
	}
	//Commented out flooring
	//mileage = floor(mileage);
    return mileage;
}

string Scooter::toString() {
    string s = "-> Scooter\n\t";
    return "-> Scooter\n" + Vehicle::toString();
}