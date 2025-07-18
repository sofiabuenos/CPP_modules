#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed() : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/**
 * @brief: creates a new object as a copy of another
 * 
 *    Example:
 *    Fixed a;
 *    Fixed b = a; Copy constructor is called here.
 *    Fixed c(a);  Copy constructor is called here too.
 *
 * - The 'this' pointer refers to the current object being constructed.
 * - Using '*this = src;' INVOKES THE ASSIGNMENT OPERATOR to copy all member variables
 *   from 'src' to the current object.
 * - This ensures that the new object is an exact copy of 'src'.
 */
Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	//std::cout << "Twin object successfully created" << std::endl;
}

/**
 * @brief: Implements the copy assignment operator.
 *         Copies the internal state from another existing object (src)
 *         to this object, and returns a reference to itself (*this).
 *         Ensures proper self-assignment check -- won't copy if they are already the same to avoid bugs.
 */
Fixed& Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_nbr = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Desctructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
	std::cout << "GetRawBits member function called" << std::endl;
	return (this->_nbr);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called" <<std::endl;
	this->_nbr = raw;
}
