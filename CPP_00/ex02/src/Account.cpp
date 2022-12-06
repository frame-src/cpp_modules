/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:58:11 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/04 16:06:35 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <chrono>
#include "../inc/Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
/* 
	should be something like: std::cout << [19920104_091532] 
	so in order:
	'[' YYYYMMDD then '_' then hhmmss then ']'
*/
void Account::_displayTimestamp(void)
{
	std::time_t	result = std::time(nullptr);
	std::tm 	*timestamp = localtime(&result);
	std::cout << '[';
	std::cout << (timestamp->tm_year + 1900)
			  << std::setw(2) << std::setfill('0')
			  << (timestamp->tm_mon)
			  << std::setw(2) << std::setfill('0')
			  << (timestamp->tm_mday);
	std::cout << '-';
	std::cout << (timestamp->tm_hour)
			  << (timestamp->tm_min) 
			  << (timestamp->tm_sec);
	std::cout << "] ";
}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

Account::Account()
{
	_accountIndex = _nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:0;";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
	_nbAccounts--;
}

/*
	timestamp()
	index:_accountIndex;
	p_amount:_amount;
	deposit:deposit;
	amount:(_amount + deposit);
		nb_deposits:_nbDdeposits;
*/
void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';' 
			  << "p_amount:" << _amount << ';'
			  << "deposit:" << deposit << ';';
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << Account::_amount << ';'
			  << "nb_deposits:" << Account::_nbDeposits;
	std::cout << std::endl;
}

/*
	timestamp();
	index:_accountIndex;
	p_amount:_amount;
	withdrawal: withdrawal;
	amount:(_amount - withdrawal);
		nb_withdrawal:_nbwithdrawal;
*/
bool	Account::makeWithdrawal( int withdrawal )
{
	if(_amount < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex << ';'
				  << "amount:" << _amount << ';'
				  << "withdrawal:refused";
		std::cout << std::endl;
		return (false);
	}
	Account::_displayTimestamp();

	std::cout << "index:" << _accountIndex << ';'
			  << "p_amount:" << _amount << ';'
			  << "deposit:" << withdrawal << ';';
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << _amount << ';'
			  << "nb_withdrawal:" << _nbWithdrawals;
	std::cout << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return(_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
			  << "amount:" << _amount << ';'
			  << "deposits:" << _nbDeposits << ';'
			  << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

int	Account::getNbAccounts( void )
{
	return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ';'
			  << "total:" << _totalAmount << ';'
			  << "deposits:" << _totalNbDeposits << ';'
			  << "withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}
