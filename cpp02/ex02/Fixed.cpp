#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed() : _nbr(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNbr)
{
	//std::cout << "Int contructor called" << std::endl;
	this->_nbr = intNbr << this->_fractBits;
}

Fixed::Fixed(const float floatNbr)
{
	//std::cout << "Float contructor called" << std::endl;
	this->_nbr = roundf(floatNbr * (1 << this->_fractBits));
}

Fixed::Fixed(const Fixed& src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed &src)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_nbr = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	//std::cout << "Desctructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
	return (this->_nbr);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits called" <<std::endl;
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

bool Fixed::operator>(const Fixed& fixed)
{
	return this->toFloat() > fixed.toFloat();
}

bool Fixed::operator<(const Fixed& fixed)
{
	return this->toFloat() < fixed.toFloat();
}

bool Fixed::operator<=(const Fixed& fixed)
{
	return this->toFloat() <= fixed.toFloat();
}

bool Fixed::operator>=(const Fixed& fixed)
{
	return this->toFloat() >= fixed.toFloat();
}

bool Fixed::operator==(const Fixed& fixed)
{
	return this->toFloat() == fixed.toFloat();
}

bool Fixed::operator!=(const Fixed& fixed)
{
	return this->toFloat() <= fixed.toFloat();
}

Fixed	Fixed::operator+(const Fixed& fixed) const
{
	Fixed result;
	int sum;
	sum = this->_nbr + fixed.getRawBits();
	result.setRawBits(sum);
	return (result);
}

Fixed	Fixed::operator-(const Fixed& operand) const
{
	Fixed result;
	int sub;
	sub = this->_nbr - operand.getRawBits();
	result.setRawBits(sub);
	return (result);
}

Fixed	Fixed::operator*(const Fixed& operand) const
{
	Fixed result;
	int mult;
	mult = this->_nbr * operand.getRawBits() >> _fractBits;
	result.setRawBits(mult);
	return (result);
}

Fixed	Fixed::operator/(const Fixed& operand) const
{
	Fixed result;
	int div;
	div = this->_nbr / operand.getRawBits() << _fractBits;
	result.setRawBits(div);
	return (result);
}

/**
 * Pre-increment operator (++fixed)
 * returns a reference to the incremented object
 */
Fixed&	Fixed::operator++(void)
{
	this->_nbr++;
	return (*this);
}

/**
 * Post-increment operator (fixed++)
 * returns a copy of the object before incrementing
 */
Fixed	Fixed::operator++(int)
{
	Fixed cpy = *this;
	this->_nbr++;
	return (cpy);
}


/**
 * Pre-decrement operator (__fixed)
 * returns a reference to the incremented object
 */
Fixed&	Fixed::operator--(void)
{
	this->_nbr--;
	return (*this);
}

/**
 * Post-decrement operator (fixed--)
 * returns a copy of the object before incrementing
 */
Fixed	Fixed::operator--(int)
{
	Fixed cpy = *this;
	this->_nbr--;
	return (cpy);
}

/**
 * Static member functions do not depend on any specific objects of a class.
 * This means they can be called independently of any object instance.
 */

Fixed& Fixed::min(Fixed& ref1, Fixed& ref2)
{
	if (ref1.getRawBits() < ref2.getRawBits())
		return (ref1);
	return (ref2);
}

Fixed& Fixed::max(Fixed& ref1, Fixed& ref2)
{
	if (ref1.getRawBits() > ref2.getRawBits())
		return (ref1);
	return (ref2);
}

const Fixed& Fixed::min(const Fixed& ref1, const Fixed& ref2)
{
	if (ref1.getRawBits() < ref2.getRawBits())
		return (ref1);
	return (ref2);
}

const Fixed& Fixed::max(const Fixed& ref1, const Fixed& ref2)
{
	if (ref1.getRawBits() > ref2.getRawBits())
		return (ref1);
	return (ref2);
}