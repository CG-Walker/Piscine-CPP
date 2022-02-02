#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal * dog = new Dog();
	const Animal * cat = new Cat();
	// Animal * test = new Animal(); // Can't create a Animal object because the class is abstract !

	delete dog;
	delete cat;

	std::cout << std::endl;

	Animal * zoo[4];

	for (size_t i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	std::cout << std::endl;

	for (size_t i = 0; i < 4 ; i++)
	{
		delete zoo[i];
	}
	return 0;
}