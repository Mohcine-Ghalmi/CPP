/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:04:49 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/24 16:25:59 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int intValue); 
        Fixed(const float floatValue);
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed& operator=(const Fixed &other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        //>, <, >=, <=, == and !=
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        //+, -, *, and /.
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;
        //++ --
        Fixed& operator++();// pre incri ++x
        Fixed operator++(int);// post incri x++
        Fixed& operator--();
        Fixed operator--(int);
        //min and max
        static const Fixed& min(const Fixed& A, const Fixed& B);
        static const Fixed& min(Fixed& A, Fixed& B);
        static const Fixed& max(const Fixed& A, const Fixed& B);
        static const Fixed& max(Fixed& A, Fixed& B);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif