/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:09:04 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/05 14:53:50 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void ff()
{
    system("leaks I_don’t_want_to_set_the_world_on_fire ");
}
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    const Animal* animalArray[4] = { new Dog(), new Cat(), new Dog(), new Cat() };

    for (int i = 0; i < 4; ++i)
        delete animalArray[i];
    
   atexit(ff);
    
    return 0;
}
