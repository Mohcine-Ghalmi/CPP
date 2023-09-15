/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:41:08 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/15 16:45:13 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <iomanip>
#include <thread>
#include <chrono>
#include <unistd.h>

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
		int		CheckEmpty();
		void	ShowContactInfo();
};

#endif