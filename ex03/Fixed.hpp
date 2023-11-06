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

        bool operator<(const Fixed &Fixed);
        bool operator<=(const Fixed &Fixed);
        bool operator>(const Fixed &Fixed);
        bool operator>=(const Fixed &Fixed);
        bool operator==(const Fixed &Fixed);
        bool operator!=(const Fixed &Fixed);

        Fixed operator+(const Fixed &Fixed);
        Fixed operator-(const Fixed &Fixed);
        Fixed operator*(const Fixed &Fixed);
        Fixed operator/(const Fixed &Fixed);

        Fixed operator++(int);
        Fixed operator--(int);
        Fixed& operator++();
        Fixed& operator--();

        int getRawBits(void) const;
		void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        static const Fixed& max(const Fixed &Fixed1, const Fixed &Fixed2);
        static const Fixed& min(const Fixed &Fixed1, const Fixed &Fixed2);
        static Fixed& max(Fixed &Fixed1, Fixed &Fixed2);
        static Fixed& min(Fixed &Fixed1, Fixed &Fixed2);
};

std::ostream& operator<<(std::ostream& os, const Fixed &Fixed);

#endif