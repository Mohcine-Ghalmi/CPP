/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:40:40 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/18 15:40:36 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl Harl;

    Harl.complain("DEBUG");
    Harl.complain("INFO");
    Harl.complain("WARNING");
    Harl.complain("ERROR");

    Harl.complain("CRITICAL");
}
