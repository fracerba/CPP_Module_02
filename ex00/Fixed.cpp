#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called\n";
    nmb = 0;
}

Fixed::Fixed(const Fixed &Fixed)
{
    std::cout<<"Copy constructor called\n";
    *this = Fixed;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &Fixed)
{
    std::cout<<"Copy assignment operator called\n";
    this->nmb = Fixed.getRawBits();
    return(*this);
}

int Fixed::getRawBits(void) const
{
   std::cout<<"getRawBits member function called\n";
   return (this->nmb);
}

void Fixed::setRawBits(int const raw)
{
    std::cout<<"setRawBits member function called\n";
    this->nmb = raw;
}
