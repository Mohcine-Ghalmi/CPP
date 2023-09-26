/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:25:17 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/26 14:40:13 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const float xFloat, const float yFloat);
        Point(const Point &other);
        ~Point();
        Point& operator=(const Point &other);
        Fixed getX() const;
        Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
