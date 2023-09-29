#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 20;
    std::cout << "FragTrap " << name << " is born!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " says goodbye!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << name << " requests a high-five from the guys!" << std::endl;
}
