/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:30:56 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/16 02:09:34 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

typedef Form * (*formMaker)(std::string const & target);

struct formItem {
	public:
		std::string name;
		formMaker f;
};

class	Intern {
	public:
		Intern (void);
		Intern (Intern const & copy);
		~Intern (void);

		Intern & operator=(Intern const & rhs);
		Form *	makeForm (std::string const & name, std::string const & target);
	private:
		static formItem const	_formCatalog[3];
};


#endif
