/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:50:20 by ehosu             #+#    #+#             */
/*   Updated: 2022/06/20 17:35:30 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"
#include <string>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int deposit ):
	_accountIndex(_nbAccounts), _amount(deposit), 
	_nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex 
				<< ";amount:" << _amount
				<< ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += _amount;
	return;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex 
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
	_nbAccounts--;
	_totalAmount -= _amount;
	return;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
	return;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals
			<< std::endl;
	return;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = _amount;

	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex
			<< ";p_amount:" << p_amount
			<< ";deposit:" << deposit
			<< ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits
			<< std::endl;
	return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount = _amount;

	_displayTimestamp();
	if ( _amount - withdrawal >= 0 )
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;

		std::cout << " index:" << _accountIndex
				<< ";p_amount:" << p_amount
				<< ";withdrawal:" << withdrawal
				<< ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
		return true;
	}
	std::cout << " index:" << _accountIndex
				<< ";p_amount:" << p_amount
				<< ";withdrawal:refused"
				<< std::endl;

	return false;
}

int		Account::checkAmount( void ) const
{
	return 0;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	curr_t;
	time(&curr_t);
	char		time_str[80];

	std::strftime(time_str, sizeof(time_str), "%Y%m%d_%H%M%S", std::localtime(&curr_t));

	std::cout << "[" << time_str << "]";

	return;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}
