/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:25:21 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/26 14:40:20 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){}

Point::Point(const Point &other): x(other.x), y(other.y){}

Point::Point(float const xFloat, float const yFloat): x(xFloat), y(yFloat){}

Point::~Point(){}

Fixed Point::getX() const
{
    return this->x;
}

Fixed Point::getY() const
{
    return this->y;
}

Point& Point::operator=(const Point &other)
{
    if (this != &other)
    {
        (Fixed)this->x = other.getX();
        (Fixed)this->y = other.getY();
    }
    return *this;
}
