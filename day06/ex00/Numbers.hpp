#ifndef NUMBERS_HPP
# define NUMBERS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits.h>

class Numbers
{
private:
	std::string _nb;
public:
	// Constructors & Destructor
	Numbers();
	Numbers(std::string nb);
	Numbers(Numbers const & ref);
	~Numbers();

	// Operator Overload
	Numbers & operator=(Numbers & rhs);
	operator char();
	operator int();
	operator float();
	operator double();

	// Getter
	std::string getNb() const;
};

#endif