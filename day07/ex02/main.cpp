#include <iostream>
#include "Array.hpp"

/* static void	ft_tests( void )
{
	// STRING
	std::cout << std::endl << "String array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<std::string> sarr(4);
	std::cout << "Before assigning: \n" << sarr << std::endl;
	sarr[0] = "First string";
	sarr[1] = "Second string";
	sarr[2] = "Third string";
	sarr[3] = "Fourth string";
	std::cout << "After assigning: \n" << sarr << std::endl;
} */

int main(void)
{
	// Empty
	std::cout << "Empty array (0)	" << std::endl;
	Array<int>	iArray;
	
	try
	{
		std::cout << "Reading array[0] : " << iArray[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Writing to array[4] : ";
		iArray[4] = 4;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// INT
	std::cout << std::endl << "Int array (4)" << std::endl;
	Array<int> iArray2(static_cast<unsigned int>(4));

	std::cout << "Before assignation : ";
	for (size_t i = 0; i < 4; i++)
		std::cout << iArray2[i] << " ";
	std::cout << std::endl;

	iArray2[0] = 8;
	iArray2[1] = 2;
	iArray2[2] = -64;
	iArray2[3] = 248;
	std::cout << "After assignation : ";
	for (size_t i = 0; i < 4; i++)
		std::cout << iArray2[i] << " ";
	std::cout << std::endl << std::endl;

	// CHAR
	std::cout << "Char array (4)" << std::endl;
	Array<char> cArray(static_cast<unsigned int>(4));

	std::cout << "Before assignation : ";
	for (size_t i = 0; i < 4; i++)
		std::cout << cArray[i] << " ";
	std::cout << std::endl;

	cArray[0] = 'a';
	cArray[1] = 'b';
	cArray[2] = 'c';

	std::cout << "After assignation : ";
	for (size_t i = 0; i < 4; i++)
		std::cout << cArray[i] << " ";
	std::cout << std::endl << std::endl;

	// FLOAT
	std::cout << "Float array (4)" << std::endl;
	Array<float> fArray(static_cast<unsigned int>(4));

	std::cout << "Before assignation : ";
	for (size_t i = 0; i < 4; i++)
		std::cout << cArray[i] << " ";
	std::cout << std::endl;

	fArray[0] = 3.14f;
	fArray[1] = -48.49f;
	fArray[2] = 0.0f;
	fArray[3] = 22.22f;

	std::cout << "After assignation : ";
	for (size_t i = 0; i < 4; i++)
		std::cout << fArray[i] << " ";
	std::cout << std::endl << std::endl;

	// STRING
	std::cout << "String array (4)" << std::endl;
	Array<std::string> sArray(static_cast<unsigned int>(4));

	std::cout << "Before assignation : ";
	for (size_t i = 0; i < 4; i++)
		std::cout << sArray[i] << " ";
	std::cout << std::endl;

	sArray[0] = "First";
	sArray[1] = "Second";
	sArray[2] = "Third";
	sArray[3] = "Fourth";
	
	std::cout << "After assignation : ";
	for (size_t i = 0; i < 4; i++)
		std::cout << sArray[i] << " ";
	std::cout << std::endl << std::endl;

	// STRING
	std::cout << "String array (copying another array)" << std::endl;
	Array<std::string> sArrayCopy(sArray);

	std::cout << "After copy : ";
	for (size_t i = 0; i < 4; i++)
		std::cout << sArrayCopy[i] << " ";
	std::cout << std::endl << std::endl;
	
	// STRING
	std::cout << "String array (assigning from another array)" << std::endl;
	Array<std::string> sArrayCopy2 = sArrayCopy;

	std::cout << "After copy : ";
	for (size_t i = 0; i < 4; i++)
		std::cout << sArrayCopy2[i] << " ";
	return (0);
}