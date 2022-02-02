#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
public:
	// Constructors & Destructor
	Brain();
	Brain(Brain & src);
	~Brain();

	// Operator Overload
	Brain & operator=(Brain & rhs);

	// Getters & Setters
	std::string * getIdeas();

	// Class Functions
private:
	std::string * _ideas;
};

#endif