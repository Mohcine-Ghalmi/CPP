/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:31 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/28 15:41:09 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::setHitPoints(unsigned int nbr)
{
    this->hitPoints = nbr;
}

void ClapTrap::setEnergyPoints(unsigned int nbr)
{
    this->energyPoints = nbr;
}

void ClapTrap::setAttackDamage(unsigned int nbr)
{
    this->attackDamage = nbr;
}

std::string ClapTrap::getName()
{
    return this->name;
}

unsigned int ClapTrap::getAttackDamage()
{
    return this->attackDamage;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " says goodbye!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoints == 0 || energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " can't attack. Not enough h`it points or energy points." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " can't take damage. No hit points left." << std::endl;
        return;
    }
    hitPoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " can't be repaired. No hit points left." << std::endl;
        return;
    }
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
    energyPoints -= 1;
}