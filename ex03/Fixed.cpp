#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout<<"Default constructor called\n";
    nmb = 0;
}

Fixed::Fixed(const int i)
{
    // std::cout<<"Int constructor called\n";
    this->nmb = (i * (1 << bits));
}

Fixed::Fixed(const float f)
{
    // std::cout<<"Float constructor called\n";
    this->nmb = (roundf(f * (1 << bits)));
}

Fixed::Fixed(const Fixed &Fix)
{
    // std::cout<<"Copy constructor called\n";
    *this = Fix;
}

Fixed::~Fixed()
{
    // std::cout<<"Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &Fix)
{
    // std::cout<<"Copy assignment operator called\n";
    this->nmb = Fix.getRawBits();
    return(*this);
}

bool Fixed::operator<(const Fixed &Fix)
{
    return (this->nmb < Fix.getRawBits());
}

bool Fixed::operator<=(const Fixed &Fix)
{
    return (this->nmb <= Fix.getRawBits());
}

bool Fixed::operator>(const Fixed &Fix)
{
    return (this->nmb > Fix.getRawBits());
}

bool Fixed::operator>=(const Fixed &Fix)
{
    return (this->nmb >= Fix.getRawBits());
}

bool Fixed::operator==(const Fixed &Fix)
{
    return (this->nmb == Fix.getRawBits());
}

bool Fixed::operator!=(const Fixed &Fix)
{
    return (this->nmb != Fix.getRawBits());
}


Fixed Fixed::operator+(const Fixed &Fix)
{
    return (Fixed(this->toFloat() + Fix.toFloat()));
}

Fixed Fixed::operator-(const Fixed &Fix)
{
    return (Fixed(this->toFloat() - Fix.toFloat()));
}

Fixed Fixed::operator*(const Fixed &Fix)
{
    return (Fixed(this->toFloat() * Fix.toFloat()));
}

Fixed Fixed::operator/(const Fixed &Fix)
{
    return (Fixed(this->toFloat() / Fix.toFloat()));
}


Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->nmb++;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->nmb--;
    return (tmp);
}

Fixed& Fixed::operator++()
{
    ++this->nmb;
    return (*this);
}

Fixed& Fixed::operator--()
{
    --this->nmb;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed &Fix)
{
    os << Fix.toFloat();
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

const Fixed& Fixed::max(const Fixed &Fix1, const Fixed &Fix2)
{
    if (Fix1.nmb > Fix2.nmb)
        return (Fix1);
    else
        return (Fix2);
}

const Fixed& Fixed::min(const Fixed &Fix1, const Fixed &Fix2)
{
    if (Fix1.nmb < Fix2.nmb)
        return (Fix1);
    else
        return (Fix2);
}

Fixed& Fixed::max(Fixed &Fix1, Fixed &Fix2)
{
    if (Fix1.nmb > Fix2.nmb)
        return (Fix1);
    else
        return (Fix2);
}

Fixed& Fixed::min(Fixed &Fix1, Fixed &Fix2)
{
    if (Fix1.nmb < Fix2.nmb)
        return (Fix1);
    else
        return (Fix2);
}