#include "Data.hpp"

// Constructors & Destructor
Data::Data() : _value("Default")
{
}

Data::Data(std::string value) : _value(value)
{
}

Data::Data(Data const & ref) : _value(ref.getValue())
{
}

Data::~Data()
{
}

// Operator Overload
Data & Data::operator=(Data const & ref)
{
	this->_value = ref.getValue();
	return *this;
}

// Getters
std::string Data::getValue( void ) const
{
	return _value;
}