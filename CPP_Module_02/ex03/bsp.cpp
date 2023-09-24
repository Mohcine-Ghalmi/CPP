#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float detT = (b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY());
    float alpha = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) / detT;
    float beta = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) / detT;
    float gamma = 1.0f - alpha - beta;

    return (alpha >= 0 && beta >= 0 && gamma >= 0);
}
