#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void)
{
	int rdm = (std::rand() % 3) + 1;
	A *	retA;
	B * retB;
	C * retC;
	
	switch (rdm)
	{
	case 1:
		retA = new A;
		return (static_cast<Base *>(retA));
	case 2:
		retB = new B;
		return (static_cast<Base *>(retB));
	case 3:
		retC = new C;
		return (static_cast<Base *>(retC));
	default:
		break;
	}
}

void identify(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "C\n";
	else
		std::cout << "???\n";	
}

void identify(Base & p)
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A\n";
		return ;
	}
	catch (std::bad_cast &bc) {
	}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B\n";
		return ;
	}
	catch (std::bad_cast &bc) {
	}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C\n";
		return ;
	}
	catch (std::bad_cast &bc) {
	}
	std::cout << "Unknown type\n";
}

int main(int argc, char const *argv[])
{
	std::srand(std::time(0));

	// 3 random Base children
	std::cout << "4 RANDOM BASE CHILDREN:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Base *rand1 = generate();
	Base *rand2 = generate();
	Base *rand3 = generate();
	Base *rand4 = generate();
	std::cout << std::endl << std::endl;

	// Create references
	Base &rand1_ref = *rand1;
	Base &rand2_ref = *rand2;
	Base &rand3_ref = *rand3;
	Base &rand4_ref = *rand4;

	std::cout << "IDENTIFY VIA ADDRESS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(rand1);
	identify(rand2);
	identify(rand3);
	identify(rand4);
	std::cout << std::endl << std::endl;

	std::cout << "IDENTIFY VIA REFERENCE:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	identify(rand1_ref);
	identify(rand2_ref);
	identify(rand3_ref);
	identify(rand4_ref);
	std::cout << std::endl << std::endl;

	std::cout << "DESTRUCTORS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	delete rand1;
	delete rand2;
	delete rand3;
	delete rand4;
	std::cout << std::endl << std::endl;
	return (0);
}
