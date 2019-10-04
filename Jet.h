//
// Created by Stephen Johnson 10/3/2019
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "Vehicle.h"

class Jet : public PoweredVehicle {

private:
   int numberOfEngines;

public:
	Jet();
	Jet(int numEngines);

	virtual ~Jet();
	virtual double mileageEstimate(double time);
    virtual string toString();
    int getNumberEngines();

};


#endif //DRIVINGSIMULATOR_JET_H