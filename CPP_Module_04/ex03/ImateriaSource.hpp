/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ImateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:26:07 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/04 13:30:26 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Amateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};
