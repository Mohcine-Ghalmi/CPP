#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(20);
    std::cout << "FragTrap " << getName() << " is born!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << getName() << " says goodbye!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << getName() << " requests a high-five from the guys!" << std::endl;
}
