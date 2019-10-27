#include "gtest/gtest.h"
#include "Node.h"

TEST(NodeTest, HandleInit) {
    Node node = Node(1, 10, 20, 5, 0, 10, 50);
    ASSERT_EQ(1, node.id);
}