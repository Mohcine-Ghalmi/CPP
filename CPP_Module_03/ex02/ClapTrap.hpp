/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:33 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/28 19:36:53 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public:
        ClapTrap(const std::string& name);
        ~ClapTrap();
        void setHitPoints(unsigned int nbr);
        void setEnergyPoints(unsigned int nbr);
        void setAttackDamage(unsigned int nbr);
        std::string getName();
        unsigned int getAttackDamage();
        unsigned int getEnergyPoints();
        unsigned int getHitPoints();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif