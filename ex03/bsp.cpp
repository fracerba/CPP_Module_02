#include "Point.hpp"

float find_area(Point const a, Point const b, Point const c)
{
    float ax = a.getX().toFloat();
    float bx = b.getX().toFloat();
    float cx = c.getX().toFloat();
    float ay = a.getY().toFloat();
    float by = b.getY().toFloat();
    float cy = c.getY().toFloat();
    float det;

    det = (ax * by) + (ay * cx) + (bx * cy) - (by * cx) - (ay * bx) - (ax * cy);
    return(std::abs(det)/ 2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float abp = find_area(a, b, point);
    float acp = find_area(a, c, point);
    float bcp = find_area(b, c, point);
    float abc = find_area(a, b, c);

    if (abp && acp && bcp)
        if (abp + acp + bcp == abc)
            return (true);
    return (false);
}