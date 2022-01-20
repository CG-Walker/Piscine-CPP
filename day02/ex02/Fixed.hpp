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

	// ------------------- ex02 -------------------
	bool operator>(Fixed const & rhs) const;
	bool operator<(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
	bool operator<=(Fixed const & rhs) const;
	bool operator==(Fixed const & rhs) const;
	bool operator!=(Fixed const & rhs) const;

	Fixed operator+(Fixed const & rhs) const;
	Fixed operator-(Fixed const & rhs) const;
	Fixed operator*(Fixed const & rhs) const;
	Fixed operator/(Fixed const & rhs) const;

	Fixed & operator++(void);
	Fixed & operator--(void);
	Fixed operator++(int n);
	Fixed operator--(int n);

	static Fixed & min(Fixed & a, Fixed & b );
	static Fixed & max(Fixed & a, Fixed & b );
	static const Fixed & min(const Fixed & a, const Fixed & b );
	static const Fixed & max(const Fixed & a, const Fixed & b );
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif