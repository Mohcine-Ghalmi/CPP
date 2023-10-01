#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) : _name(name), FragTrap(name), ScavTrap(name)
{
    ClapTrap::_name = name;
    FragTrap::hitPoints = 100;
    ScavTrap::energyPoints = 50;
    FragTrap::attackDamage = 30;
    std::cout << "DiamondTrap " << _name << " is born!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamnodTrap " << _name << " says goodbye!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
