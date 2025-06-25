#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_nbr;
		static const int	_fractBits;
	public:
		Fixed();
		Fixed(const Fixed& src);
		Fixed &operator=(const Fixed& src);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif