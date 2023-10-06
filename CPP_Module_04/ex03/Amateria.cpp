/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:48:31 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/05 16:33:54 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

AMateria::AMateria(const std::string &type) : type(type) {}

AMateria::AMateria(const AMateria &other) : type(other.type) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &other)
{
    (void)other;
    // if (this != &other)
    //     this->type = other.type;
    return *this;
}

std::string const &AMateria::getType() const
{
    return type;
}

void AMateria::use(class ICharacter &target)
{
    (void)target;
}
