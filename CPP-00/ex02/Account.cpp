#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	std::cout << "index:" << getNbAccounts() << ';'
	<< "amount:" << checkAmount() << ';'
	<< "created" << std::endl;
	_nbAccounts++;
	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << 8 - getNbAccounts() << ';'
	<< "amount:" << checkAmount() << ';'
	<< "closed" << std::endl;
	_nbAccounts--;
	return ;
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ';';
	std::cout << "total:" << getTotalAmount() << ';';
	std::cout << "deposits:" << getNbDeposits() << ';';
	std::cout << "withdrawals:" << getNbWithdrawals() << ';' << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int p_amount;

	p_amount = _amount;
	_displayTimestamp();
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ';'
	<< "p_amount:" << p_amount << ';'
	<< "deposit:" << deposit << ';'
	<< "amount:" << _amount << ';'
	<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	if (withdrawal > _amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex  << ";"
	<< "amounts:" << _amount << ";"
	<< "deposits:" << _nbDeposits << ";"
	<< "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	time;
	tm		*current_time;

	std::time(&time);
	current_time = std::localtime(&time);
	std::cout << '[';
	std::cout << current_time->tm_year + 1900
	<< std::setfill('0') << std::setw(2) << current_time->tm_mon + 1
	<< std::setfill('0') << std::setw(2) << current_time->tm_mday
	<< '_' 
	<< std::setfill('0') << std::setw(2) << current_time->tm_hour
	<< std::setfill('0') << std::setw(2) << current_time->tm_min
	<< std::setfill('0') << std::setw(2) << current_time->tm_sec;
	std::cout << ']' << ' ';
}