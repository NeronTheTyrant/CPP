/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:40:50 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/15 22:15:11 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class	PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm (void);
		PresidentialPardonForm (PresidentialPardonForm const & copy);
		PresidentialPardonForm (std::string const & target);
		~PresidentialPardonForm (void);

		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
		void	executeForm (void) const;
};

#endif
