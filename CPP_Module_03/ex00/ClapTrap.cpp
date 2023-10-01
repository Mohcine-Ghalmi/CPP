/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:17 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/30 16:30:25 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
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

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->energyPoints = other.energyPoints;
        this->hitPoints = other.hitPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
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