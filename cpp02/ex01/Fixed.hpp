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
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif