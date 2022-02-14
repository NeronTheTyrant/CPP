/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:55:21 by mlebard           #+#    #+#             */
/*   Updated: 2022/02/14 18:08:03 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {
	public:
		Form (void);
		Form (Form const & copy);
		Form (std::string const & name, int signGrade, int execGrade);

		~Form (void);

		Form & operator=(Form const & rhs);

		std::string const &	getName (void) const;
		bool	isSigned (void) const;
		int		getSignGrade (void) const;
		int		getExecGrade (void) const;

		void	setSignGrade (int grade);
		void	setExecGrade (int grade);

		void	beSigned (Bureaucrat const & b);
		virtual void	execute (Bureaucrat const & executor) = 0;
		void	checkExecute (Bureaucrat const & executor) const ;

		class GradeTooHighException : public std::exception {
			virtual const char *	what (void) const throw() {return "Grade too high";};};
		class GradeTooLowException : public std::exception {
			virtual const char *	what (void) const throw() {return "Grade too low";};};
	private:
		std::string	_name;
		bool	_signed;
		int	_signGrade;
		int	_execGrade;
};

std::ostream & operator<< (std::ostream & o, Form const & rhs);

#endif
