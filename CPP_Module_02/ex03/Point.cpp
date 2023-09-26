/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:25:21 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/25 17:25:22 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){}

Point::Point(const Point &other): x(other.x), x(other.y){}

Point::Point(float const xFloat, float const yFloat): x(xFloat), y(yFloat){}

Point::~Point(){}

Point& Point::operator=(const Point &other)
{
    if (this != &other)
    {
        this->x = other.getX();
        this->y = other.getY();
    }
    return *this;
}

Fixed Point::getX()
{
    return this->x;
}

Fixed Point::getY()
{
    return this->y;
}
