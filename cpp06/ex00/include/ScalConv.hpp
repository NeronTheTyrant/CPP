/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalConv.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:33:22 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/19 02:35:03 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALCONV_HPP
# define SCALCONV_HPP

#include <string>
#include <cstdlib>
#include <cfloat>
#include <climits>
#include <limits>
#include <sstream>
#include <math.h>

typedef enum type {CHAR, INT, FLOAT, DOUBLE, BAD} type;

class	ScalConv {
	public:
		ScalConv (void);
		ScalConv (ScalConv const & copy);
		ScalConv (std::string const & string);
		~ScalConv (void);

		ScalConv & operator=(ScalConv const & rhs);

		class NonDisplayableException : public std::exception {
			virtual const char *	what (void) const throw()
			{return "Non displayable";};
		};
		class ImpossibleConversionException : public std::exception {
			virtual const char *	what (void) const throw()
			{return "Impossible Conversion";};
		};

		static bool	verbose;

		void	setVal (void);
		double	getVal (void);
		void	setConvString (std::string const & str);
		std::string const &	getConvString (void);

		void	identify (void);
		char	toChar (void);
		int		toInt (void);
		float	toFloat (void);
		double	toDouble (void);
	private:
		std::string	_toConvert;
		type	_type;
		double	_val;
		bool	_impossible;

		bool	_isNumeric (void);
};

#endif
