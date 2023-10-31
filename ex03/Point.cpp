#include "Point.hpp"

Point::Point()
{
    std::cout<<"Point Default constructor called\n";
}

Point::Point(const float f1, const float f2)
{
    std::cout<<"Point Float constructor called\n";
    this->x(f1);
    this->y(f2);
}

Point::Point(const Point &Point)
{
    std::cout<<"Point Copy constructor called\n";
    *this = Point;
}

Point::~Point()
{
    std::cout<<"Point Destructor called\n";
}

Point& Point::operator=(const Point &Point)
{
    std::cout<<"Point Copy assignment operator called\n";
    this->x = Point->x;
    this->y = Point->y;
    return(*this);
}