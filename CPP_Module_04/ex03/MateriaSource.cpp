/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:34:13 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/05 15:23:14 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        learnedMaterias[i] = NULL;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; ++i)
        if (!learnedMaterias[i])
        {
            learnedMaterias[i] = materia;
            break;
        }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i)
        if (learnedMaterias[i] && learnedMaterias[i]->getType() == type)
            return learnedMaterias[i]->clone();
    return NULL; 
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        delete learnedMaterias[i];
}
