#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_nbr;
		static const int	_fractBits;
	public:
		Fixed();
		Fixed(const int intNbr);
		Fixed(const float floatNbr);
		Fixed(const Fixed& src);
		Fixed &operator=(const Fixed& src);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		bool	operator>(const Fixed& fixed);
		bool	operator<(const Fixed& fixed);
		bool	operator>=(const Fixed& fixed);
		bool	operator<=(const Fixed& fixed);
		bool	operator==(const Fixed& fixed);
		bool	operator!=(const Fixed& fixed);
		Fixed	operator+(const Fixed& operand) const;
		Fixed	operator-(const Fixed& operand) const;
		Fixed	operator*(const Fixed& operand) const;
		Fixed	operator/(const Fixed& operand) const;
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
		static Fixed& min(Fixed& ref1, Fixed& ref2);
		static Fixed& max(Fixed& ref1, Fixed& ref2);
		static const Fixed& min(const Fixed& ref1, const Fixed& ref2);
		static const Fixed& max(const Fixed& ref1, const Fixed& ref2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif