/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:17:15 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/15 19:35:55 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm (void);
		ShrubberyCreationForm (ShrubberyCreationForm const & copy);
		ShrubberyCreationForm (std::string const & target);
		~ShrubberyCreationForm (void);

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
		void	execute (Bureaucrat const & executor) const;
};

#endif
