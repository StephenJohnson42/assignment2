//
// Created by Stephen Johnson 10/42019
//

#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "Vehicle.h"

class Scooter: public Vehicle {

private:


public:
    explicit Scooter(string brand, string model);

    virtual ~Scooter();

    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_Scooter_H