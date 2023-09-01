/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:14:55 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/01 16:50:47 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYAWSESOMEPHONEBOOK_HPP
# define MYAWSESOMEPHONEBOOK_HPP

#include <iostream>
#include <string.h>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarksetSecret;
		int BookIndex;
	public:
		Contact();
		~Contact();
		std::string CheckInput(std::string mssg);
		void	InitVar();
		void    CreatContact();
		void    ShowContact();
		void	SetIndex(int IndexBook);
};

class PhoneBook
{
	private:
		Contact contact[8];
	public:
		PhoneBook();
		~PhoneBook();
		void    AddConatct();
		Contact SearchContact();
		void    ExitProgram();
};

#endif