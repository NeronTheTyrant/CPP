#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap (void);
		ScavTrap (ScavTrap const & copy);
		ScavTrap (std::string const & name);
		~ScavTrap (void);

		ScavTrap & operator=(ScavTrap const & rhs);

		void	attack (const std::string & target);
		void	guardGate (void);
	private:
};

#endif
