/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:04:47 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/25 11:35:41 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0){}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed::Fixed(const int intValue) : value(intValue << fractionalBits){}

Fixed::Fixed(const float floatValue) : value(roundf(floatValue * ( 1 << fractionalBits))){}

Fixed::~Fixed(){}

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->value = other.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return this->value;
}

void Fixed::setRawBits( int const raw )
{
    this->value = raw;
}

float Fixed::toFloat() const
{
    return (value + 0.0) / (1 << fractionalBits);
}

int Fixed::toInt() const
{
    return value >> fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) 
{
    os << fixed.toFloat();
    return os;
}

//>, <, >=, <=, == and !=
bool Fixed::operator>(const Fixed &other) const
{
    return this->value > other.value;
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->value < other.value;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->value <= other.value;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->value != other.value;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
    ++this->value;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++(*this);
    return tmp;    
}

Fixed& Fixed::operator--()
{
    this->value -= (1 << this->fractionalBits);
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --(*this);
    return tmp;    
}

const Fixed& Fixed::min(const Fixed& A, const Fixed& B)
{
    return (A < B) ? A : B;
}

const Fixed& Fixed::min(Fixed& A, Fixed& B)
{
    return (A < B) ? A : B;
}

const Fixed& Fixed::max(const Fixed& A, const Fixed& B)
{
    return (A > B) ? A : B;
}

const Fixed& Fixed::max(Fixed& A, Fixed& B)
{
    return (A > B) ? A : B;
}
