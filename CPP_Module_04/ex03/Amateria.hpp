/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:47:10 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/04 12:16:16 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include "Icharacter.hpp"

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria(const std::string &type);
        AMateria(const AMateria &other);
        virtual ~AMateria();
        AMateria &operator=(const AMateria &other);
        std::string const &getType() const;
        virtual AMateria *clone() const = 0;
        virtual void use(class ICharacter &target);
};
