/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:49:35 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/05 15:38:29 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::getNbAccounts() 
{
	return _nbAccounts;
}

int Account::getTotalAmount() 
{
	return _totalAmount;
}

int Account::getNbDeposits() 
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals() 
{
	return _totalNbWithdrawals;
}

void	Account::_displayTimestamp()
{
	std::time_t time;

	time = std::time(NULL);
	std::cout <<"[" << 1900 + std::localtime(&time)->tm_year;
	std::cout << std::setw(2) << 1 + std::localtime(&time)->tm_mon;
    std::cout << std::setw(2) << std::localtime(&time)->tm_mday;
    std::cout << "_";
    std::cout << std::setw(2) << std::localtime(&time)->tm_hour;
    std::cout << std::setw(2) << std::localtime(&time)->tm_min;
    std::cout << std::setw(2) << std::localtime(&time)->tm_sec ;
    std::cout << "] " << std::flush;
}

void	Account::displayStatus() const
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amoutn:" << _amount << ";" 
	<< "deposit:" << _nbDeposits << ";" << "withdrawls:" << _nbWithdrawals << std::endl;
}

