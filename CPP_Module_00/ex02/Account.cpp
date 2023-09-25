/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:49:35 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/25 16:09:56 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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
	std::cout <<"[" << std::localtime(&time)->tm_year;
	std::cout << std::localtime(&time)->tm_mon;
    std::cout << std::localtime(&time)->tm_mday;
    std::cout << "_";
    std::cout << std::localtime(&time)->tm_hour;
    std::cout << std::localtime(&time)->tm_min;
    std::cout << std::localtime(&time)->tm_sec;
    std::cout << "] " << std::flush;
}

void	Account::displayStatus() const
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" 
	<< "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";"
	<< "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_totalAmount += _amount;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created" << std::endl;
}

Account::~Account()
{
	_nbAccounts--;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}

int	Account::checkAmount()const
{
	return _amount;
}

void	Account::makeDeposit(int deposit)
{
	_totalAmount +=deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";";
	_amount += deposit;
	std::cout << "deposit:" << deposit << ";" << "amount:" << _amount  << ";"
	<< "nb_deposits:" << _nbDeposits <<std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";";
	if (withdrawal > checkAmount())
	{
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	_nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";" << "amount:" << _amount << ";"
	<< "nb_withdrawals:"<< _nbWithdrawals << std::endl;
	return true;
}
