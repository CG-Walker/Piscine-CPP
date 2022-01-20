#include "Fixed.hpp"
#include <cmath>

// ------------------- ex00 -------------------

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

// ------------------- ex01 -------------------

Fixed::Fixed(const int value)
{
	std::cout << "Int consructor called" << std::endl;
	setRawBits(value << _fract);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float consructor called" << std::endl;
	this->setRawBits((int)roundf(value * (1 << this->_fract)));
}

float Fixed::toFloat(void) const
{
	float f;

	f = (float)getRawBits() / (1 << _fract);
	return f;
}

int	Fixed::toInt(void) const
{
	return (getRawBits() >> _fract);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
