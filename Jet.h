//
// Created by Stephen Johnson 10/3/2019
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
   int numberOfEngines;

public:
	Jet();
	Jet(string brand, string model, string fuelType, int numEngines);

	virtual ~Jet();
	virtual double mileageEstimate(double timex);
    virtual string toString();
    int getNumberEngines();

};


#endif //DRIVINGSIMULATOR_JET_H