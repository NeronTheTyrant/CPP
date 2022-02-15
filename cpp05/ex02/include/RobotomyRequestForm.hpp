/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:25:58 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/15 19:35:49 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class	RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm (void);
		RobotomyRequestForm (RobotomyRequestForm const & copy);
		RobotomyRequestForm (std::string const & target);
		~RobotomyRequestForm (void);

		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
		void	execute(Bureaucrat const & executor) const;
};

#endif
