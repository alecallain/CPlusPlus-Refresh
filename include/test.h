#ifndef __H_TEST__
#define __H_TEST__

#include <iostream>
#include <array>
#include <string>
#include <fstream>

class Test {
    private: 
        double radius;
    public:
        Test(double rad);
        void circleArea(double r);
        double getRadius();
};

#endif