/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:00:16 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/05 11:56:39 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; ++i)
        ideas[i] = "Idea " + std::to_string(i + 1);
    std::cout << "Brain created!" << std::endl;
}
Brain::Brain(const Brain& other)
{
    for (int i = 0; i < 100; ++i)
        ideas[i] = other.ideas[i];
    std::cout << "Brain deep copy created!" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed!" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = other.ideas[i];
    return *this;
}
