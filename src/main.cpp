#include <iostream>
#include <array>
#include <string>
#include <fstream>

#include "test.h"

int main (int argc, char** argv) {

    std::cout << "Hello World" << std::endl;

    Test object(8.9);

    object.circleArea(object.getRadius());

    return 0;
}