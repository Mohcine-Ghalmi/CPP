#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
    private:
        std::string _name;   
    public:
        DiamondTrap(const std::string name);
        ~DiamondTrap();
        void whoAmI();
};

#endif