//
// Created by bartek on 26.10.19.
//

#ifndef OK_PROJEKT_NODE_H
#define OK_PROJEKT_NODE_H


class Node {

public:
    int id;
    int x,y;
    int cargo;
    int time_start, time_end;
    int unload_duration;

    explicit Node(int);
    Node(int id, int x, int y, int cargo, int time_start, int time_end, int unload_duration);

};


#endif //OK_PROJEKT_NODE_H
