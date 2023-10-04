/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:07:01 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/04 14:21:10 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    std::cout << "Default constructor called for DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : FragTrap(other), ScavTrap(other), name(other.name)
{
    std::cout << "Copy constructor called for DiamondTrap" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        name = other.name;
    }
    return *this;
}

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
