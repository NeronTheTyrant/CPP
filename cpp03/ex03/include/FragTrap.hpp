#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap {
	public:
		FragTrap (void);
		FragTrap (FragTrap const & copy);
		FragTrap (std::string const & name);
		~FragTrap (void);

		FragTrap & operator=(FragTrap const & rhs);

		void	highFivesGuys (void);

	protected:
		void	initHP(void);
		void	initEP(void);
		void	initAD(void);

	private:
		
};

#endif
