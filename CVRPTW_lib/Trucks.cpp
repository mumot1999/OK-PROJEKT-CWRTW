//
// Created by bartek on 27.10.19.
//

#include "Trucks.h"

Trucks::Trucks(int trucks, int capacity) {
    for (int i = 0; i < trucks; ++i) {
        Truck truck = Truck(i, capacity);
        this->trucks.push_back(truck);
    }
}

Trucks::Trucks() {}
