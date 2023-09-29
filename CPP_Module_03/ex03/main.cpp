/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:39 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/28 15:02:47 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("CL4P-TP");
    claptrap.attack("Bandit");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);

    ScavTrap Scavtrap("SC4V-TP");
    Scavtrap.attack("Badass Bandit");
    Scavtrap.guardGate();

    return 0;
}
