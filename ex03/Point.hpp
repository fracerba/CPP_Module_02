#ifndef Point_HPP
#define Point_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float, const float);
        Point(const Point &Point);
        ~Point();
        Point& operator=(const Point &Point);
};

#endif