/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:06:04 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/01 16:50:40 by mghalmi          ###   ########.fr       */
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

void	Contact::InitVar()
{
	this->BookIndex = 0;
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
	std::cout << "|" << this->BookIndex  << std::endl;
	std::cout << "|" << ((this->FirstName.length() > 10) ? (this->FirstName.substr(0, 10) + ".") : this->FirstName) << std::endl;
	std::cout << "|" << ((this->LastName.length() > 10) ? (this->LastName.substr(0, 10) + ".") : this->LastName) << std::endl;
	std::cout << "|" << ((this->Nickname.length() > 10) ? (this->Nickname.substr(0, 10) + ".") : this->Nickname) << std::endl;
}

void	Contact::SetIndex(InedxBook)
{
	this->BookIndex = IndexBook;
}