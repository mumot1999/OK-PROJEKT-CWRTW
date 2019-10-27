//
// Created by bartek on 27.10.19.
//

#include "Nodes.h"

Nodes::Nodes()=default;


Nodes::Nodes(int nodes) {
    for (int i = 0; i < nodes; ++i) {
        Node node = Node(i);
        this->nodes.push_back(node);
    }
}

int Nodes::size() {
    return (int) this->nodes.size();
}

Node Nodes::operator[](int i) {
    return this->nodes[i];
}
