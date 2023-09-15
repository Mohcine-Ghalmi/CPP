/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:06:06 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/15 15:37:39 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

PhoneBook::PhoneBook(){};
PhoneBook::~PhoneBook(){};

void        help_menu()
{
    std::cout << "\x1b[34m" << "|---------Welcome to the awesome Phonebook📱📔----------|" << std::endl;
    std::cout << "\x1b[32m" << "|                        1-ADD                          |" << std::endl;
    std::cout << "\x1b[33m" << "|                        2-SEARCH                       |" << std::endl;
    std::cout << "\x1b[31m" << "|                        3-EXIT                         |" << std::endl;
    std::cout << "\x1b[34m" << "|-------------------------------------------------------|" << "\x1b[0m" << std::endl;
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
	std::cout << "Adding Contact";
	std::flush(std::cout);
	for (int i = 0; i < 5;i++)
	{
		std::cout << ".";
		std::flush(std::cout);
		// sleep();
	}
	std::cout << std::endl;
	std::cout << "Contact Added";
	std::cout << std::endl;
	this->ContactIndex++;
	if (this->ContactIndex > 7)
		this->ContactIndex = 0;
}

void PhoneBook::SearchContact()
{
    std::string ContactIndex;
    int Contact;

	std::cout << "\x1b[32m" ;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "  Index | First Name | Last Name |  Nickname |" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(5) << i + 1 << std::setw(5);
		this->contact[i].ShowContact();
		std::cout << "----------------------------------------------" << std::endl;
	}
	std::cout << "\x1b[0m";
	while(1) 
	{
		std::cout << "Enter the conatc\'s index: ";
		if (!std::getline(std::cin, ContactIndex))
			exit(0);
		if (ContactIndex.length() == 1 && isNumber(ContactIndex))
			Contact = std::atoi(ContactIndex.c_str());
		if (Contact < 1 || Contact > 8)
			std::cout << "\x1b[31m" <<"Invalid input" << "\x1b[0m" << std::endl;
		else
		{
			if (!this->contact[Contact - 1].CheckEmpty())
				return ;
			std::cout << "----------->> CONTACT #" << Contact << " <<-----------" << std::endl;
			this->contact[Contact - 1].ShowContactInfo();
			std::cout << "--------------------------------------" << std::endl;
			break;
		}
	}
}


void	PhoneBook::InitIndex()
{
	this->ContactIndex  = 0;
}
