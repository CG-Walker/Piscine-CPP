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
	/* code */
	return 0;
}
