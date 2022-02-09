#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

class	MateriaSource {
	public:
		MateriaSource (void);
		MateriaSource (MateriaSource const & copy);
		~MateriaSource (void);

		MateriaSource & operator=(MateriaSource const & rhs);
	private:
		
};

#endif