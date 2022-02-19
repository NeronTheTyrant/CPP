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



typedef enum type {CHAR, INT, FLOAT, DOUBLE, BAD} type;

typedef struct truetype 

class	ScalConv {
	public:
		ScalConv (void);
		ScalConv (ScalConv const & copy);
		~ScalConv (void);

		ScalConv & operator=(ScalConv const & rhs);


	private:
		std::string	toConvert;
		char	c;
		int		i;
		float	f;
		double	d;
		bool	hasPoint;
		bool	isNeg;
		bool	hasF;
		bool	isInf;
		bool	isNaN;
		bool	isNum;
		type	type;
		double	val;
};

#endif
