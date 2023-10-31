#ifndef Fixed_HPP
#define Fixed_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

class Fixed
{
    private:
        int nmb;
        const static int bits = 8;
    public:
        Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &Fixed);
        ~Fixed();
        Fixed& operator=(const Fixed &Fixed);

        int getRawBits(void) const;
		void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &Fixed);

#endif