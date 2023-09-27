/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:24 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/27 18:31:25 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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