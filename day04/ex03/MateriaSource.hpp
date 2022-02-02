#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
public:
	// Constructors & Destructor
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	~MateriaSource();

	// Operator Overload
	MateriaSource & operator=(MateriaSource const & rhs);

	// Getters & Setters

	// Class Functions
	void		learnMateria(AMateria * materia);
	AMateria *	createMateria(std::string const & type);
private:
	AMateria *	(_inventory[4]);
};

 #endif