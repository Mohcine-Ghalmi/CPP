/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:52:04 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/04 12:20:37 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include "Amateria.hpp"
#include "Character.hpp"
#include "Icharacter.hpp"
#include "Cure.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &other);
        virtual ~Ice();
        Ice &operator=(const Ice &other);
        AMateria *clone() const;
        void use(class ICharacter &target);
};

