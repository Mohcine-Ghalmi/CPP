/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:47:43 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/17 18:54:10 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    return WeaponType;
}

void    Weapon::setType(std::string newType)
{
    this->WeaponType = newType;
}

Weapon::Weapon(std::string type)
{
    this->setType(type);
}

Weapon::Weapon(){}
