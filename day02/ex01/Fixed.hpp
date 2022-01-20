#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int _value;
	static const int _fract = 8;
public:
	// ------------------- ex00 -------------------
	Fixed();
	Fixed(Fixed const & src);
	~Fixed();

	Fixed & operator=(Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	// ------------------- ex01 -------------------
	Fixed(const int value);
	Fixed(const float value);

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif