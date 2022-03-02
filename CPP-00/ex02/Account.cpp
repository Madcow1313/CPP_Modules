#include "Account.hpp"

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
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
	
}

void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_amount -= withdrawal;
	if (_amount >= 0)
		return (true);
	else
	{
		_amount += withdrawal;
		return (false);
	}
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{

}


void	Account::_displayTimestamp(void)
{

}