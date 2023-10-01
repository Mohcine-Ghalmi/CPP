/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:39 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/30 17:56:54 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond("Sparky");

    diamond.attack("Target");
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();

    return 0;
}
