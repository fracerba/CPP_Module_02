#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called\n";
    nmb = 0;
}

Fixed::Fixed(const int i)
{
    std::cout<<"Int constructor called\n";
    this->nmb = (i * (1 << bits));
}

Fixed::Fixed(const float f)
{
    std::cout<<"Float constructor called\n";
    this->nmb = (roundf(f * (1 << bits)));
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

bool Fixed::operator<(const Fixed &Fixed)
{
    
}

bool Fixed::operator<=(const Fixed &Fixed)
{
    
}

bool Fixed::operator>(const Fixed &Fixed)
{
    
}

bool Fixed::operator>=(const Fixed &Fixed)
{
    
}

bool Fixed::operator==(const Fixed &Fixed)
{
    
}

bool Fixed::operator!=(const Fixed &Fixed)
{
    
}


Fixed Fixed::operator+(const Fixed &Fixed)
{
    
}

Fixed Fixed::operator-(const Fixed &Fixed)
{
    
}

Fixed Fixed::operator*(const Fixed &Fixed)
{
    
}

Fixed Fixed::operator/(const Fixed &Fixed)
{
    
}


Fixed Fixed::operator++(int)
{
    
}

Fixed Fixed::operator--(int)
{
    
}

Fixed& Fixed::operator++()
{
    
}

Fixed& Fixed::operator--()
{
    
}

std::ostream& operator<<(std::ostream& os, const Fixed &Fixed)
{
    os << Fixed.toFloat();
    return (os);
}

int Fixed::getRawBits(void) const
{
   return (this->nmb);
}

void Fixed::setRawBits(int const raw)
{
    this->nmb = raw;
}

float Fixed::toFloat(void) const
{
    return(static_cast<float>(nmb) / (1 << bits));
}

int Fixed::toInt(void) const
{
    return(nmb / (1 << bits));
}

const Fixed& Fixed::max(const Fixed &Fixed1, const Fixed &Fixed2)
{

}

const Fixed& Fixed::min(const Fixed &Fixed1, const Fixed &Fixed2)
{

}

Fixed& Fixed::max(Fixed &Fixed1, Fixed &Fixed2)
{

}

Fixed& Fixed::min(Fixed &Fixed1, Fixed &Fixed2)
{

}