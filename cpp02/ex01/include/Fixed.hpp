/*	Header	*/

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class	Fixed {

	public:
		Fixed(void);
		Fixed(Fixed & copy);
		Fixed(int n);
		~Fixed(void);

		Fixed & operator=(const Fixed & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		int		getFractBits(void) const;

	private:
		int					_raw;
		static const int	_fractBits = 8;
};

std::ostream &	operator<< (std::ostream & o, Fixed const & rhs);

#endif
