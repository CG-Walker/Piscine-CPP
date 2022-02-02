#include <iostream>
#include "iter.hpp"

int main(void)
{
	int			iArray[4] = {0, 1, 2, 3};
	char		cArray[5] = "abcd";
	float		fArray[4] = {0.1f, 2.3f, 4.5f, 6.7f};
	std::string	sArray[4] = {"A", "BC", "DEF", "GHIJ"};

	// INT
	iter(iArray, 4, display);
	std::cout << std::endl;

	// CHAR
	iter(cArray, 5, display);
	std::cout << std::endl;

	// FLOAT
	iter(fArray, 4, display);
	std::cout << std::endl;

	// STRING
	iter(sArray, 4, display);
	std::cout << std::endl;
	return (0);
}
