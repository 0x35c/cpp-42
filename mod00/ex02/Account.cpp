/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:54:51 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/22 15:36:19 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void){
	time_t	now = std::time(0);
	tm		*local_time = std::localtime(&now);

	std::cout << "[" << 1900 + local_time->tm_year;
	if (local_time->tm_mon < 10)
		std::cout << "0";
	std::cout << local_time->tm_mon + 1;
	if (local_time->tm_mday < 10)
		std::cout << "0";
	std::cout << local_time->tm_mday << "_";
	if (local_time->tm_hour < 10)
		std::cout << "0";
	std::cout << local_time->tm_hour;
	if (local_time->tm_min < 10)
		std::cout << "0";
	std::cout << local_time->tm_min;
	if (local_time->tm_sec < 10)
		std::cout << "0";
	std::cout << local_time->tm_sec;
	std::cout << "] ";
}

int	Account::getNbAccounts(void){
	return (_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (_totalAmount);
}

int	Account::getNbDeposits(void){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit){ this->_amount = initial_deposit;
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	_totalAmount += this->_amount;
	_nbAccounts++;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::makeDeposit(int deposit){
	_displayTimestamp();
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	if (withdrawal > this->_amount)
	{
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int	Account::checkAmount(void) const{
	return (this->_amount);
}

void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
