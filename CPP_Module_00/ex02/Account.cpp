/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:49:35 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/03 16:18:25 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Account.hpp"

int Account::getNbAccounts( void ) 
{
    return _nbAccounts;
}

int Account::getTotalAmount( void ) 
{
    return _totalAmount;
}

int Account::getNbDeposits( void ) 
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) 
{
    return _totalNbWithdrawals;
}

