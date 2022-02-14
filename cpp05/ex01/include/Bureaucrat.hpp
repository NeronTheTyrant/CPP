#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class	Bureaucrat {
	public:
		Bureaucrat (void);
		Bureaucrat (Bureaucrat const & copy);
		Bureaucrat (std::string const & name, int const & grade);
		~Bureaucrat (void);

		Bureaucrat & operator=(Bureaucrat const & rhs);

		std::string const &	getName (void) const;
		int const &	getGrade (void) const;

		void	setGrade (int const & grade);

		void	addGrade (void);
		void	subGrade (void);
		void	signForm (Form const & f);

		class GradeTooHighException : public std::exception {
			virtual const char *	what (void) const throw()
			{return "Grade too high";};
		};
		class GradeTooLowException : public std::exception {
			virtual const char *	what (void) const throw()
			{return "Grade too low";};
		};
	private:
		std::string const	_name;
		int	_grade;
};

std::ostream &	operator<< (std::ostream & o, Bureaucrat const & rhs);

#endif
