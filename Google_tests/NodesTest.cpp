#include "gtest/gtest.h"
#include "Nodes.h"
#include "Node.h"

TEST(NodesTest, HandleInit) {
    Nodes nodes = Nodes(5);
    nodes.nodes[1].x = 20;
    ASSERT_EQ(5, nodes.size());
    ASSERT_EQ(20, nodes[1].x);
}