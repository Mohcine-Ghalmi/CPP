/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:49:13 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/05 15:23:14 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) : name(name)
{
    for (int i = 0; i < 4; ++i)
        inventory[i] = NULL;
}

Character::Character(const Character &other) : name(other.name)
{
    for (int i = 0; i < 4; ++i)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
        delete inventory[i];
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        name = other.name;

        for (int i = 0; i < 4; ++i)
            delete inventory[i];
        for (int i = 0; i < 4; ++i)
        {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    if (!m)
        return;

    for (int i = 0; i < 4; ++i)
        if (!inventory[i])
        {
            inventory[i] = m;
            return;
        }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}
