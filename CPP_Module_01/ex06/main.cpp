/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:10:18 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/18 16:41:18 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Harl Harl;

        Harl.complain(argv[1]);
        return (0);
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    return (1);
}
