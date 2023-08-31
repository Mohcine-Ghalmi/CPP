/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:06:04 by mghalmi           #+#    #+#             */
/*   Updated: 2023/08/31 06:45:19 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

Contact::Contact(){};
Contact::~Contact(){};

std::string Contact::CheckInput(std::string mssg)
{
	bool yes;
	std::string	Input;

	yes = false;
	std::cout << mssg;
	do
	{
		std::getline(std::cin, Input);
		if (Input.empty() && std::cin.good())
		{
			std::cout << "the input is invalid pleas try again" << std::endl;
			std::cout << mssg;
		}
		else
			yes = true;
	}while(!yes);
	return (Input);
}

void   Contact::CreatContact()
{
	this->FirstName = this->CheckInput("First Name:" );
	this->LastName = this->CheckInput("Last Name: ");
	this->Nickname = this->CheckInput("Nick Name: ");
	this->PhoneNumber = this->CheckInput("Phone Number: ");
	this->DarksetSecret = this->CheckInput("Drakset Secret: ");
}

void Contact::GiveIndex()
{
	this->BookIndex += 1;
}
void Contact::ShowContact()
{
	
}

void    PhoneBook::AddConatct()
{
	
}

Contact PhoneBook::SearchContact()
{
	Contact here;
	return here;
}

void    PhoneBook::ExitProgram()
{
	
}
