#include "Brain.hpp"

// Constructors & Destructor
Brain::Brain()
{
	_ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
	{
		_ideas[i] = "I've got an idea !\n";
	}
	std::cout << "Brain default Constructor called." << std::endl;
}

Brain::Brain(Brain & src)
{
	std::string * ideasToCopy = src.getIdeas();

	_ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
	{
		_ideas[i] = ideasToCopy[i] + "_copy";
	}
	std::cout << "Brain Copy constructor called." << std::endl;
}

Brain::~Brain()
{
	delete [] _ideas;
	std::cout << "Brain Destructor called." << std::endl;
}

// Operator Overload
Brain & Brain::operator=(Brain & rhs)
{
	_ideas = rhs.getIdeas();
	return *this;
}

// Getters & Setters
std::string * Brain::getIdeas()
{
	return _ideas;
}