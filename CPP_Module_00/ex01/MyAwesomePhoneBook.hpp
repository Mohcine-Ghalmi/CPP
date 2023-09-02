/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:14:55 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/02 20:56:24 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYAWSESOMEPHONEBOOK_HPP
# define MYAWSESOMEPHONEBOOK_HPP

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <iomanip>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarksetSecret;
	public:
		Contact();
		~Contact();
		std::string CheckInput(std::string mssg);
		void    CreatContact();
		void    ShowContact();
};

class PhoneBook
{
	private:
		Contact contact[8];
		int ContactIndex;
	public:
		PhoneBook();
		~PhoneBook();
		void    AddConatct();
		void	SearchContact();
		void	InitIndex();
		void	help_menu();
};

#endif