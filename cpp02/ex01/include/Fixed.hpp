/*	Header	*/

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class	Fixed {

	public:
		Fixed(void);
		Fixed(Fixed & copy);
		Fixed(int n);
		Fixed(float f);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		static int	getFractBits(void);
        :q
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_raw;
		static int const	_fractBits = 8;
};

std::ostream &	operator<< (std::ostream & o, Fixed const & rhs);

#endif
