#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit):_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	<< "amount:" << initial_deposit << ";" "created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			<< "amount:" << _amount << ";"
			<< "closed" << std::endl;
}

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

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			<< "p_amount:" << _amount << ";"
			<< "deposit:" << deposit << ";";
	if (deposit > 0)
	{
		_amount += deposit;
		_nbDeposits++;
		_totalAmount += deposit;
		_totalNbDeposits++;
	}
	std::cout << "amount:" << _amount << ";"
			<< "nb_deposits:" << _nbDeposits << std::endl;

}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
	<< "total:" << getTotalAmount() << ";" 
	<< "deposits:" << getNbDeposits() << ";"
	<< "withdrawals:" << getNbWithdrawals() << ";" << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "deposits:" << _nbDeposits << ";" 
	<< "withdrawals:" << _nbWithdrawals << ";" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	amount = checkAmount();
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			<< "p_amount:" << amount << ";"
			<< "withdrawal:";
	if (amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";"
			<< "amount:" << _amount << ";"
			<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

void	Account::_displayTimestamp(void)
{
	std::time_t	timeNow;
	std::tm *local;
	char buffer[80];
	
	timeNow = time(NULL);
	local = localtime(&timeNow);
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", local);
	std::cout << buffer;
}