/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:10:15 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/18 16:41:48 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money." <<std::endl;
    std::cout << "You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free." << std::endl; 
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
   void (Harl::*tab[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
   std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
   for (int i = 0; i < 4; i++)
        if(!names[i].compare(level))
        {
            for (int j = i ; j < 4; j++)
            {
                std::cout << "[ " << names[j] << " ]" << std::endl;
                (this->*tab[j])();
                std::cout << std::endl;
            }
            return ;
        }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
