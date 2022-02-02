#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal * dog = new Dog();
	const Animal * cat = new Cat();

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
	
	std::cout << std::endl;
	Dog * milla = new Dog();
	Dog * shiva = new Dog(*milla);
	//Dog * shiva = new Dog();
	//*shiva = *milla;
	std::cout << std::endl;
	std::cout << "Milla Brain Address : " << milla->getBrain() << std::endl;
	std::cout << "Shiva Brain Address : " << shiva->getBrain() << std::endl;
	
	std::cout << std::endl;
	delete milla;
	delete shiva;
	return 0;
}