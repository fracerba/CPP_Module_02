#include "Point.hpp"

float find_area(Point const a, Point const b, Point const c)
{
    float ab;
    float bc;
    float ac;

    return(ab / 2.0);    
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