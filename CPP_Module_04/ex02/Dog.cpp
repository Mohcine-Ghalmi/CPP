/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:50:53 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/05 14:52:12 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
{  
    this->brain = new Brain();
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
    brain = new Brain();
    *this = other;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        delete brain;
        this->type = other.type;
        this->brain = new Brain( *other.brain );
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog barks" << std::endl;
}
