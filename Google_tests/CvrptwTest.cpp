#include <Nodes.h>
#include <Trucks.h>
#include "gtest/gtest.h"
#include "Cvrptw.h"

TEST(CvrptwTest, HandleFail) {
    //Truck will back to base at 120
    Nodes nodes = Nodes(2);
    nodes.nodes[0].time_end = 100;

    nodes.nodes[1].y = 10;
    nodes.nodes[1].cargo = 10;
    nodes.nodes[1].time_start = 100;
    nodes.nodes[1].unload_duration = 10;

    Trucks trucks = Trucks(10, 1000);

    Cvrptw cvrptw = Cvrptw(nodes, trucks);

    ASSERT_EQ(-1, cvrptw.run());
}

TEST(CvrptwTest, HandleOk) {
    //Truck will back to base at 120
    Nodes nodes = Nodes(2);
    nodes.nodes[0].time_end = 120;

    nodes.nodes[1].y = 10;
    nodes.nodes[1].cargo = 10;
    nodes.nodes[1].time_start = 100;
    nodes.nodes[1].time_end = 150;
    nodes.nodes[1].unload_duration = 10;

    Trucks trucks = Trucks(1, 1000);

    Cvrptw cvrptw = Cvrptw(nodes, trucks);

    ASSERT_EQ(120, cvrptw.run());
}