//
// Created by bartek on 27.10.19.
//

#ifndef TESTING_TEST_CVRPTW_H
#define TESTING_TEST_CVRPTW_H

#include "Trucks.h"
#include "Nodes.h"

class Cvrptw {
public:
    Nodes nodes;
    Trucks trucks;

    Cvrptw(Nodes nodes, Trucks trucks);
    int run();
};


#endif //TESTING_TEST_CVRPTW_H
