/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:25:40 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/26 15:40:15 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float px = point.getX().toFloat();
    float py = point.getY().toFloat();
    
    float vax = a.getX().toFloat();
    float vay = a.getY().toFloat();
  
    float vbx = b.getX().toFloat();
    float vby = b.getY().toFloat();
  
    float vcx = c.getX().toFloat();
    float vcy = c.getY().toFloat();

    float u, v, w;

    u = ((vby - vcy) * (px - vcx) + (vcx - vbx) * (py - vcy)) /
        ((vby - vcy) * (vax - vcx) + (vcx - vbx) * (vay - vcy));

    v = ((vcy - vay) * (px - vcx) + (vax - vcx) * (py - vcy)) /
        ((vby - vcy) * (vax - vcx) + (vcx - vbx) * (vay - vcy));

    w = 1 - u - v;
 
    return (u >= 0 && v >= 0 && w >= 0 && u <= 1 && v <= 1 && w <= 1);
}
