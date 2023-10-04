/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:58:20 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/03 17:58:51 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &other) : AMateria(other) {}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(class ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
