//
// Created by bartek on 26.10.19.
//

#include "Node.h"

Node::Node(int id, int x, int y, int cargo, int time_start, int time_end, int unload_duration){
    this->id = id;
    this->x = x;
    this->y = y;
    this->cargo = cargo;
    this->time_start = time_start;
    this->time_end = time_end;
    this->unload_duration = unload_duration;
}

Node::Node(int id) {
    this->id = id;
};

