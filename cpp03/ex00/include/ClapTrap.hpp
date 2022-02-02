#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class	ClapTrap {
	public:
		ClapTrap (void);
		ClapTrap (ClapTrap const & copy);
		ClapTrap (std::string const & name);
		~ClapTrap (void);

		ClapTrap & operator=(ClapTrap const & rhs);

		void	attack (const std::string & target);
		void	takeDamage (unsigned int amount);
		void	beRepaired (unsigned int amount);
	private:
		std::string	_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;

		void	_noAct(void);
};

#endif
