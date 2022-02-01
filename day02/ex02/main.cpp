#include <iostream>
#include "Fixed.hpp"

int main(void) {

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << std::endl;

	// Incrémentation et Décrémentation
	std::cout << "++" << a << " = " << ++a << std::endl;
	std::cout << a << "++ = " << a++ << " (After : " << a << ")" << std::endl;
	std::cout << "--" << a << " = " << --a << std::endl;
	std::cout << a << "-- = " << a-- << " (After : " << a << ")" << std::endl;
	std::cout << std::endl;

	// Opérateur de Comparaison
	std::cout << a << " > " << b << " : " << (a > b) << std::endl;
	std::cout << a << " >= " << b << " : " << (a >= b) << std::endl;
	std::cout << a << " < " << b << " : " << (a < b) << std::endl;
	std::cout << a << " <= " << b << " : " << (a <= b) << std::endl;
	std::cout << a << " == " << b << " : " << (a == b) << std::endl;
	std::cout << a << " != " << b << " : " << (a != b) << std::endl;
	std::cout << std::endl;

	// Opérateurs Arithmétiques
	a = 5;
	std::cout << a << " + " << b << " = " << (a + b) << std::endl;
	std::cout << a << " - " << b << " = " << (a - b) << std::endl;
	std::cout << a << " * " << b << " = " << (a * b) << std::endl;
	std::cout << a << " / " << b << " = " << (a / b) << std::endl;
	std::cout << std::endl;

	// Min et Max
	std::cout << "Max between " << a << " & " << b << " : " << Fixed::max(a, b) << std::endl;
	std::cout << "Min between " << a << " & " << b << " : " << Fixed::min(a, b) << std::endl;

	return 0;
}