#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
	public:
		FragTrap (void);
		FragTrap (FragTrap const & copy);
		FragTrap (std::string const & name);
		~FragTrap (void);

		FragTrap & operator=(FragTrap const & rhs);

		void	highFivesGuys (void);
	private:
		
};

#endif
