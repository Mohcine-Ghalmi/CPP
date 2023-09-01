/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 04:23:01 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/01 16:27:44 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

int main(void)
{
    Contact user;
    user.InitVar();
    user.CreatContact();
    user.ShowContact();
}