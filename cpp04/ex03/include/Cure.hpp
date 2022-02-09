#ifndef CURE_HPP
# define CURE_HPP

class	Cure {
	public:
		Cure (void);
		Cure (Cure const & copy);
		~Cure (void);

		Cure & operator=(Cure const & rhs);
	private:
		
};

#endif