/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:34:15 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/04 13:41:02 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ImateriaSource.hpp"
#include "Amateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* learnedMaterias[4];

    public:
        MateriaSource();
        virtual void learnMateria(AMateria* materia);
        virtual AMateria* createMateria(std::string const & type);
        virtual ~MateriaSource();
};
    