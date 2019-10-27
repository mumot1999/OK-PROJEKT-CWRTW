project(CVRPTW)

set(HEADER_FILES
        Cvrptw.h
        Truck.h
        Trucks.h
        )

set(SOURCE_FILES
        Cvrptw.cpp
        Truck.cpp
        Trucks.cpp
        )

add_library(CVRPTW_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})