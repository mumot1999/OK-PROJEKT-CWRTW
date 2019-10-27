//
// Created by bartek on 27.10.19.
//

#ifndef TESTING_TEST_TRUCKS_H
#define TESTING_TEST_TRUCKS_H

#include <vector>
#include "Truck.h"

class Trucks {
public:
    std::vector< Truck > trucks;

    Trucks(int trucks, int capacity);
    Trucks();
};


#endif //TESTING_TEST_TRUCKS_H
