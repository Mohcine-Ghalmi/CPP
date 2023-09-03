/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:06:04 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/03 12:01:24 by mghalmi          ###   ########.fr       */
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
		std::cout << "📞Phone Number\t: ";
		if (!std::getline(std::cin, Input))
			exit(0);
		Valid = isAlphaNumeric(Input);
		if (Valid)
			std::cout  << "\x1b[31m" << "the input is invalid try again" << "\x1b[0m" << std::endl;
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
		if (!std::getline(std::cin, Input))
			exit(0);
		if (!Input.empty() && std::cin.good())
			Valid = true;
		else
			std::cout  << "\x1b[31m" << "the input is invalid try again" << "\x1b[0m" << std::endl;
	}while(!Valid);
	return (Input);
}

int	Contact::CheckEmpty()
{
	if (this->FirstName.empty())
	{
		std::cout << "\x1b[31m" << "There's no contact with this index" << "\x1b[0m" << std::endl;
		return 0;
	}
	return 1;
}

void   Contact::CreatContact()
{
	this->FirstName = this->CheckInput("😊First Name\t: ");
	this->LastName = this->CheckInput("😄Last Name\t: ");
	this->Nickname = this->CheckInput("📛Nick Name\t: ");
	this->PhoneNumber = GetNum();
	this->DarksetSecret = this->CheckInput("🤐Drakset Secret: ");
}

void Contact::ShowContact()
{
	std::cout << " | " << std::setw(10) << ((this->FirstName.length() > 10) ? (this->FirstName.substr(0, 10) + ".") : this->FirstName);
	std::cout << " | " << std::setw(10) << ((this->LastName.length() > 10) ? (this->LastName.substr(0, 10) + ".") : this->LastName);
	std::cout << "| " << std::setw(10) << ((this->Nickname.length() > 10) ? (this->Nickname.substr(0, 10) + ".") : this->Nickname);
	std::cout << "|" << std::endl;
}

void Contact::ShowContactInfo()
{
	std::cout << "😊First Name\t:\t" << this->FirstName << std::endl;
	std::cout << "😄Last Name\t:\t" << this->LastName << std::endl;
	std::cout << "📛Nick Name\t:\t" << this->Nickname << std::endl;
	std::cout << "📞Phone Number\t:\t" << this->PhoneNumber << std::endl;
	std::cout << "🤐Drakset Secret:\t" << this->DarksetSecret << std::endl;
}
