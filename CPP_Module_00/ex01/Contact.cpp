/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:06:04 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/03 10:56:38 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

Contact::Contact(){};
Contact::~Contact(){};

int isAlphaNumeric(const std::string &str) {
    for (size_t i = 0; i < str.length();i++)
        if (!std::isdigit(str[i]))
            return 1;
    return 0;
}

std::string GetNum()
{
	std::string Num;
	int Valid;
	std::string	Input;

	Valid = 0;
	do
	{
		std::cout << "Phone Number\t: ";
		std::getline(std::cin, Input);
		Valid = isAlphaNumeric(Input);
		if (Valid)
			std::cout << "the input is invalid pleas try again" << std::endl;
	}while(Valid);
	return (Input);	
}

std::string Contact::CheckInput(std::string mssg)
{
	bool Valid;
	std::string	Input;

	Valid = false;
	do
	{
		std::cout << mssg;
		std::getline(std::cin, Input);
		if (!Input.empty() && std::cin.good())
			Valid = true;
		else
			std::cout << "the input is invalid pleas try again" << std::endl;
	}while(!Valid);
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
	this->FirstName = this->CheckInput("First Name\t: ");
	this->LastName = this->CheckInput("Last Name\t: ");
	this->Nickname = this->CheckInput("Nick Name\t: ");
	this->PhoneNumber = GetNum();
	this->DarksetSecret = this->CheckInput("Drakset Secret\t: ");
}

void Contact::ShowContact()
{
	std::cout << " | " << std::setw(10) << ((this->FirstName.length() > 10) ? (this->FirstName.substr(0, 10) + ".") : this->FirstName);
	std::cout << " | " << std::setw(10) << ((this->LastName.length() > 10) ? (this->LastName.substr(0, 10) + ".") : this->LastName);
	std::cout << " | " << std::setw(10) << ((this->Nickname.length() > 10) ? (this->Nickname.substr(0, 10) + ".") : this->Nickname) << std::endl;
}

void Contact::ShowContactInfo()
{
	std::cout << "First Name\t:\t" << this->FirstName << std::endl;
	std::cout << "Last Name\t:\t" << this->LastName << std::endl;
	std::cout << "Nick Name\t:\t" << this->Nickname << std::endl;
	std::cout << "Phone Number\t:\t" << this->PhoneNumber << std::endl;
	std::cout << "Drakset Secret\t:\t" << this->DarksetSecret << std::endl;
}
