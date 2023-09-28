/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:45 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/28 15:41:33 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{   
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap " << getName() << " is born!" << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap " << getName() << " is destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << getName() << " attacks " << target << " with its special ScavTrap attack, causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gatekeeper mode!" << std::endl;
}