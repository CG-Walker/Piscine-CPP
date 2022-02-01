#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
public:
	Base();
	Base(Base const & ref);
	virtual ~Base();

	Base & operator=(Base const & ref);
};

#endif