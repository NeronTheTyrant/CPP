/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:50:19 by mlebard           #+#    #+#             */
/*   Updated: 2022/01/21 03:00:55 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>


class	Karen {

	public:
	typedef void (Karen::*complainer) (void);

	Karen(void);
	~Karen(void);

	void	complain(std::string level);
	private:
	
	
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	static complainer	_complaint[4];
	static std::string	_complaintLevel[4];
};

#endif
