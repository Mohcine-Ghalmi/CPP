/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:41:57 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/15 16:42:47 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <iomanip>
#include <thread>
#include <chrono>
#include <unistd.h>
#include "ContactClass.hpp"

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
};

void        help_menu();

#endif