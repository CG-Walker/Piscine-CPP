#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	delete dog;
	delete cat;

	std::cout << std::endl;

	Animal *zoo[100];

	for (size_t i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	
	for (size_t i = 0; i < 100; i++)
	{
		delete zoo[i];
	}
	
	std::cout << "End of program" <<  std::endl;
	return 0;
}