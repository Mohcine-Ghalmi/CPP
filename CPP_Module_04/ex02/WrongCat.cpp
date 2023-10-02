/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:27:47 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/02 11:28:27 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    type = other.type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other) {
        type = other.type;
    }
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makes a generic sound" << std::endl;
}
