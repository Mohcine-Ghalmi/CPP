/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:04:51 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/30 16:19:38 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    if (bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15) ))
        std::cout << "Point A is in the triangle" << std::endl;
    else
        std::cout << "Point A is not in the triangle" << std::endl;
    
    if (bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15) ))
        std::cout << "Point B is in the triangle" << std::endl;
    else
        std::cout << "Point B is not in the triangle" << std::endl;
    return 0;
}
