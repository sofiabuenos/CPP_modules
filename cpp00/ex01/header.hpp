#ifndef HEADER_HPP
# define HEADER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "phonebook.hpp"
# include "contact.hpp"

std::string	truncate(const std::string& str);
std::string	trim(std::string &info);
bool		isNumber(const std::string &phoneNumber);
int			atoi(const std::string &str);

#endif