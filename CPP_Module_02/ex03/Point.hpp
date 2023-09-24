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
        Fixed getX();
        Fixed getY();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif