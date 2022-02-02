#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal * meta = new Animal();
	const Animal * j = new Dog();
	const Animal * i = new Cat();
	const WrongAnimal * k = new WrongCat();

	std::cout << std::endl;
	std::cout << "j is of type : " << j->getType() << std::endl;
	std::cout << "i is of type : " << i->getType() << std::endl;
	std::cout << "k is of type : " << k->getType() << std::endl;

	std::cout << std::endl;
	i->makeSound(); // Will output the Cat sound!
	j->makeSound();
	meta->makeSound();
	k->makeSound(); // Will output the WrongAnimal sound!

	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	delete k;

	return 0;
}