/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:45 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/03 17:36:02 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{   
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " is born!" << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap " << this->name << " is destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints == 0 || this->energyPoints == 0)
    {
        std::cout << "ScavTrap " << name << " can't attack. Not enough h`it points or energy points." << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << " with its special ScavTrap attack, causing " << this->attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " <<name << " is now in Gatekeeper mode!" << std::endl;
}
