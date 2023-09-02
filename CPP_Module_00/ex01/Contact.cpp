/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:06:04 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/02 21:19:32 by mghalmi          ###   ########.fr       */
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
		if (Input.empty() && !std::cin.good())
		{
			std::cout << "the input is invalid pleas try again" << std::endl;
			std::cout << mssg;
		}
		else
			yes = true;
	}while(!yes);
	return (Input);
}

int	Contact::CheckEmpty()
{
	if (this->FirstName.empty())
	{
		std::cout << "There's no contact with this index" << std::endl;
		return 0;
	}
	return 1;
}

void   Contact::CreatContact()
{
	this->FirstName = this->CheckInput("First Name:" );
	this->LastName = this->CheckInput("Last Name: ");
	this->Nickname = this->CheckInput("Nick Name: ");
	this->PhoneNumber = this->CheckInput("Phone Number: ");
	this->DarksetSecret = this->CheckInput("Drakset Secret: ");
}

void Contact::ShowContact()
{
	std::cout << " | " << std::setw(5) << ((this->FirstName.length() > 10) ? (this->FirstName.substr(0, 10) + ".") : this->FirstName);
	std::cout << " | " << std::setw(5) << ((this->LastName.length() > 10) ? (this->LastName.substr(0, 10) + ".") : this->LastName);
	std::cout << " | " << std::setw(5) << ((this->Nickname.length() > 10) ? (this->Nickname.substr(0, 10) + ".") : this->Nickname) << std::endl;
}
