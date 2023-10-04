/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:57:30 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/04 12:22:29 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Amateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Icharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &other);
        virtual ~Cure();
        Cure &operator=(const Cure &other);
        AMateria *clone() const;
        void use(class ICharacter &target);
};
