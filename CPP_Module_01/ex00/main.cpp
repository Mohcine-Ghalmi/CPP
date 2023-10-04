/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:56:01 by mghalmi           #+#    #+#             */
/*   Updated: 2023/10/03 12:46:37 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie stackZombie1("Stack Zombie 1");
    Zombie stackZombie2("Stack Zombie 2");
    Zombie *heapZombie1 = newZombie("Heap Zombie 1");
    Zombie *heapZombie2 = newZombie("Heap Zombie 2");

    stackZombie1.announce();
    stackZombie2.announce();
    heapZombie1->announce();
    heapZombie2->announce();
    delete heapZombie1;
    delete heapZombie2;
    randomChump("randum chump zombie");
    return 0;
}