#include "Point.hpp"

Point::Point()
{
    std::cout<<"Point Default constructor called\n";
    const_cast<Fixed&>(x) = 0;
    const_cast<Fixed&>(y) = 0;
}

Point::Point(const float f1, const float f2)
{
    std::cout<<"Point Float constructor called\n";
    Fixed a(f1);
    Fixed b(f2);
    const_cast<Fixed&>(x) = a;
    const_cast<Fixed&>(y) = b;
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
    const_cast<Fixed&>(x) = Point.getX();
    const_cast<Fixed&>(y) = Point.getY();
    return(*this);
}

Fixed Point::getX(void) const
{
   return (this->x);
}

Fixed Point::getY(void) const
{
   return (this->y);
}