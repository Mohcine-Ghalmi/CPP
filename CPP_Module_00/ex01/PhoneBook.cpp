/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:06:06 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/02 21:18:54 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

PhoneBook::PhoneBook(){};
PhoneBook::~PhoneBook(){};

void        PhoneBook::help_menu()
{
    std::cout << "|---------Welcome to the awesome Phonebook ☎📔----------|" << std::endl;
    std::cout << "|                        1-ADD                          |" << std::endl;
    std::cout << "|                        2-SEARCH                       |" << std::endl;
    std::cout << "|                        3-EXIT                         |" << std::endl;
    std::cout << "|-------------------------------------------------------|" << std::endl;
}

bool isNumber(const std::string& s)
{
    for (size_t i = 0; i < s.length(); i++)
        if (std::isdigit(s[i]) == 0) 
            return false;
    return true;
}

void    PhoneBook::AddConatct()
{
	this->contact[this->ContactIndex].CreatContact();
	this->ContactIndex++;
}

void PhoneBook::SearchContact()
{
	std::string ContactIndex;
	int	Contact;
	
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(5) << i + 1 << std::setw(5);
		this->contact[i].ShowContact();
	}
	while(1) 
	{
		std::cout << "Enter the conatc\'s index: ";
		if (!std::getline(std::cin, ContactIndex))
			exit(1);
		if (ContactIndex.length() == 1 &&  isNumber(ContactIndex))
			Contact = std::stoi(ContactIndex);
		if (Contact < 1 || Contact > 8)
			std::cout << "Invalid input" << std::endl;
		else
		{
			if (!this->contact[Contact - 1].CheckEmpty())
				return  ;
			std::cout << Contact;
			this->contact[Contact - 1].ShowContact();
			break;
		}
	}
}

void	PhoneBook::InitIndex()
{
	this->ContactIndex  = 0;
}