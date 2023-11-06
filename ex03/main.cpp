#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) 
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 5);
    Point p(2, 3);

    std::cout <<"Punto a("<<a.getX().toFloat()<<","<<a.getY().toFloat()<<")"<<std::endl;
    std::cout <<"Punto b("<<b.getX().toFloat()<<","<<b.getY().toFloat()<<")"<<std::endl;
    std::cout <<"Punto c("<<c.getX().toFloat()<<","<<c.getY().toFloat()<<")"<<std::endl;
    std::cout <<"Punto p("<<p.getX().toFloat()<<","<<p.getY().toFloat()<<")\n"<<std::endl;
    if (bsp(a, b, c, p))
        std::cout <<"Il punto e' all'interno del triangolo."<< std::endl;
    else
        std::cout <<"Il punto non e' all'interno del triangolo."<< std::endl;
    return (0);
}