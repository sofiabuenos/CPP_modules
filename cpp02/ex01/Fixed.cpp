#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed() : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNbr)
{
	std::cout << "Int contructor called" << std::endl;
	this->_nbr = intNbr << this->_fractBits;
}

/**
 * It may seem a bit counterintuitive that we can't do the inverse operation from float to integer
 * by shifting 8 bits to the right. This operator only works for ints.
 * What we have to do instead is multiply the number by 1/256 or 1 * 2^-8,
 * which is what we do here: (floatNbr * (1 << this->_fractBits))
 */
Fixed::Fixed(const float floatNbr)
{
	std::cout << "Float contructor called" << std::endl;
	this->_nbr = roundf(floatNbr * (1 << this->_fractBits));
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	//std::cout << "Twin object successfully created" << std::endl;
}

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
	return (this->_nbr);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called" <<std::endl;
	this->_nbr = raw;
}

float	Fixed::toFloat(void) const
{
	float	nbr;

	nbr = (float)this->_nbr / (float)(1 << this->_fractBits);
	return (nbr);
}

int	Fixed::toInt(void) const
{
	int	nbr;

	nbr = this->_nbr >> this->_fractBits;
	return (nbr);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}