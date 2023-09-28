/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:45 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/28 19:40:18 by sleeps           ###   ########.fr       */
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
    if (getHitPoints() == 0 || getEnergyPoints() == 0)
    {
        std::cout << "ScavTrap " << getName() << " can't attack. Not enough h`it points or energy points." << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << getName() << " attacks " << target << " with its special ScavTrap attack, causing " << getAttackDamage() << " points of damage!" << std::endl;
    unsigned int EnergyPoints = getEnergyPoints();
    setEnergyPoints(EnergyPoints--);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gatekeeper mode!" << std::endl;
}