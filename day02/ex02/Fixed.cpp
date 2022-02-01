#include "Fixed.hpp"

// ------------------- ex00 -------------------

Fixed::Fixed() : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	//std::cout << "Assignation operator called" << std::endl;
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
	//std::cout << "Int consructor called" << std::endl;
	setRawBits(value << _fract);
}

Fixed::Fixed(const float value)
{
	//std::cout << "Float consructor called" << std::endl;
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

// ------------------- ex02 -------------------

bool Fixed::operator>(Fixed const & rhs) const
{
	return (getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (getRawBits() != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed ret;

	ret = toFloat() + rhs.toFloat();
	return (ret);
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed ret;

	ret = toFloat() - rhs.toFloat();
	return (ret);
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed ret;

	ret = toFloat() * rhs.toFloat();
	return (ret);
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	Fixed ret;

	ret = toFloat() / rhs.toFloat();
	return (ret);
}

Fixed & Fixed::operator++(void)
{
	_value += 1;
	return (*this);
}
	
Fixed & Fixed::operator--(void)
{
	_value -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;

	_value += 1;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;

	_value -= 1;
	return tmp;
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
	
const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
	
Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}