#include "header.hpp"

std::string truncate(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

std::string	trim(std::string &info)
{
	if (!info.empty() && info[info.length() -1] == '\n')
		info.resize(info.length() -1);
	return (info);
	
}

bool isNumber(const std::string &phoneNumber)
{
	if (phoneNumber.length() != 9)
		return false;
	for (size_t i = 0; i < phoneNumber.length(); i++)
	{
		if (!std::isdigit(phoneNumber[i]))
			return false;
	}
	return true;
}

int	atoi(const std::string &str)
{
	int	i = 0;
	int num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return num;
}