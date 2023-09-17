/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:52:16 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/17 19:01:03 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nameA, Weapon& weaponA)
{
    this->nameA = nameA;
    this->weaponA = &weaponA;
}

void    HumanA::attack()
{
    std::cout << this->nameA << " attacks with their " << this->weaponA->getType() << std::endl;
}
