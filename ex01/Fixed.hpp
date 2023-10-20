#ifndef Fixed_HPP
#define Fixed_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Fixed
{
    private:
        int nmb;
        const static int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &Fixed);
        ~Fixed();
        Fixed& operator=(const Fixed &Fixed);

        int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif