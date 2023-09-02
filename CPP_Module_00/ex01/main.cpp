/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 04:23:01 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/02 16:13:38 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

int main(void)
{
    PhoneBook user;
    std::string Input;
    
    user.InitIndex();
    do
    {
        user.help_menu();
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
    return (0);
}
