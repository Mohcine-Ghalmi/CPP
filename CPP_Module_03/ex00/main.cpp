#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("SLEEPS");

    claptrap.attack("Bandit");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);
    claptrap.attack("Badass Bandit");
    claptrap.takeDamage(12);
    claptrap.beRepaired(5);

    return 0;
}