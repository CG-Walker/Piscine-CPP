#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
private:
	std::string *_ideas;
public:
	Brain(/* args */);
	~Brain();
};

Brain::Brain(/* args */)
{
	_ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
	{
		_ideas[i] = "I've got an idea !\n";
	}
	std::cout << "Brain has been created." << std::endl;
}

Brain::~Brain()
{
	delete [] _ideas;
	std::cout << "Brain has been deleted." << std::endl;
}


#endif