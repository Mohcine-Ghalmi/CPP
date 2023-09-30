/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:52:13 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/30 15:07:42 by sleeps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nameB)
{
    this->nameB = nameB;
    this->weaponB = NULL;
}

void    HumanB::attack()
{
    if (weaponB != NULL)
        std::cout << nameB << " attacks with their " << weaponB->getType() << std::endl;
    else
        std::cout << nameB << " doesn't have a weapon to attack." << std::endl;
}

void    HumanB::setWeapon(Weapon& weaponB)
{
    this->weaponB = &weaponB;
}
