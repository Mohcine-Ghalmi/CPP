/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:07:01 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/02 09:59:36 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name)
{
    FragTrap::hitPoints = 100;
    ScavTrap::energyPoints = 50;
    FragTrap::attackDamage = 30;
    std::cout << "DiamondTrap " << name << " is born!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamnodTrap " << name << " says goodbye!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
