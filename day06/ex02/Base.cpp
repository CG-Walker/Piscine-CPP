#include "Base.hpp"

Base::Base()
{
	std::cout << "Base default constructor called.\n";
}

Base::Base(Base const & ref)
{
	(void)ref;
	std::cout << "Base copy constructor called.\n";
}

Base::~Base()
{
	std::cout << "Base destructor called.\n";
}

Base & Base::operator=(Base const & ref)
{
	(void)ref;
	return (*this);
}