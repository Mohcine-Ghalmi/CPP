/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:04:51 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/26 14:40:53 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    return 0;
}
