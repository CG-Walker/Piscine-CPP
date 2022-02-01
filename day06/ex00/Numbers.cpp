#include "Numbers.hpp"

// Constructors & Destructor
Numbers::Numbers() : _nb("Empty")
{
}

Numbers::Numbers(std::string nb) : _nb(nb)
{
}

Numbers::Numbers(Numbers const & ref)
{
	_nb = ref.getNb();
}

Numbers::~Numbers()
{
}

// Operator Overload
Numbers & Numbers::operator=(Numbers & rhs)
{
	_nb = rhs.getNb();
	return *this;
}

Numbers::operator char()
{
	char 	ret = 0;
	int		tmp = 0;

	try
	{
		tmp = stoi(_nb);
	}
	catch(const std::invalid_argument & e)
	{
		std::cout << "char: Impossible" << std::endl;
		return ret;
	}
	catch(const std::out_of_range & e)
	{
		std::cout << "char: Impossible" << std::endl;
		return ret;
	}
	if (tmp < CHAR_MIN || tmp > CHAR_MAX)
	{
		std::cout << "char: Impossible" << std::endl;
		return ret;
	}
	if (tmp >= ' ' && tmp <= '~')
	{
		ret = tmp;
		std::cout << "char: '" << ret << "'" << std::endl;
	}
	else
		std::cout << "char: Non displayable" << std::endl;
	return ret;
}

Numbers::operator int()
{
	int ret = 0;

	try
	{
		ret = stoi(_nb);
	}
	catch(const std::invalid_argument & e)
	{
		std::cout << "int: Impossible" << std::endl;
		return ret;
	}
	catch(const std::out_of_range & e)
	{
		std::cout << "int: Impossible" << std::endl;
		return ret;
	}
	std::cout << "int: " << ret << std::endl;
	return ret;
}

Numbers::operator float()
{
	float ret = 0;

	try
	{
		ret = stof(_nb);
	}
	catch(const std::invalid_argument & e)
	{
		std::cout << "float: Impossible" << std::endl;
		return ret;
	}
	catch(const std::out_of_range & e)
	{
		std::cout << "float: Impossible" << std::endl;
		return ret;
	}
	std::cout << "float: " << ret << 'f' << std::endl;
	return ret;
}

Numbers::operator double()
{
	double ret = 0;

	try
	{
		ret = stod(_nb);
	}
	catch(const std::invalid_argument & e)
	{
		std::cout << "double: Impossible" << std::endl;
		return ret;
	}
	catch(const std::out_of_range & e)
	{
		std::cout << "double: Impossible" << std::endl;
		return ret;
	}
	std::cout << "double: " << ret << std::endl;
	return ret;
}

// Getters
std::string Numbers::getNb() const
{
	return _nb;
}