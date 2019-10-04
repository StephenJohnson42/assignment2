//
// Created by Stephen Johnson 10/42019
//

#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:


public:
    explicit Skateboard();

    virtual ~Skateboard();

    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H