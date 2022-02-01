#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
private:
	std::string _value;
public:
	// Constructors & Destructor
	Data();
	Data(std::string value);
	Data(Data const & ref);
	~Data();

	// Operator Overload
	Data & operator=(Data const & ref);

	// Getters
	std::string getValue( void ) const;
};

#endif