/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:38:17 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/16 20:32:46 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int hordeSize = 2;
    std::string zombieName = "Horde Zombie";

    Zombie *zombiePtr = zombieHorde(hordeSize, zombieName);
    for (int i = 0; i < hordeSize; i++)
    {
        std::cout << "Zombie " << i + 1 << " ";
        zombiePtr[i].announce();
    }
    delete[] zombiePtr;
    return 0;
}
