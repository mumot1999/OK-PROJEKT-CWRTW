project(Node)

set(HEADER_FILES
        Node.h
        Nodes.h)

set(SOURCE_FILES
        Node.cpp
        Nodes.cpp)

add_library(Node_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})