//
// Created by bartek on 27.10.19.
//

#ifndef TESTING_TEST_NODES_H
#define TESTING_TEST_NODES_H


#include "Node.h"
#include <vector>

class Nodes {
public:
    std::vector< Node > nodes;

    Nodes();

    explicit Nodes(int);

    int size();

    Node operator[](int);
};


#endif //TESTING_TEST_NODES_H
