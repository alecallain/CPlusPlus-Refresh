#include <iostream>
#include <array>
#include <string>
#include <fstream>

#include "test.h"

// Do not use "use namespace std"

Test::Test(double rad) {
    radius = rad;
}

void Test::circleArea(double r) {
    radius = r;
    double area = 3.14 * radius * radius;

    std::cout << "Radius is: " << radius << std::endl;
    std::cout << "Area is: " << area << std::endl;
}

double Test::getRadius() {
    return radius;
}