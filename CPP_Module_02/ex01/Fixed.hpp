/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:04:49 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/22 21:14:01 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int value;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int intValue)
        Fixed(const int float floatValue)
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed& operator=(const Fixed &other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
}

#endif