/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 04:23:01 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/15 16:44:03 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"
#include "PhoneBookClass.hpp"

int main(void)
{
    PhoneBook user;
    std::string Input;
    
    user.InitIndex();
    do
    {
        help_menu();
        std::cout << ">";
        if (!std::getline(std::cin, Input))
            return (0);
        if (!Input.compare("ADD"))
            user.AddConatct();
        else if(!Input.compare("SEARCH"))
            user.SearchContact();
        else if (Input.compare("EXIT"))
            std::cout << "Invalid command" << std::endl;
    } while (Input.compare("EXIT"));
    std::cout << "\x1b[31m" << "🔥See you in hell🎃" << std::endl;
    return (0);
}
