#include <iostream>
#include "Numbers.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of args\n";
		return 1;
	}
	
	Numbers nb(argv[1]);
	std::cout << std::fixed << std::setprecision(1);
	
	char	c = nb;
	int		i = nb;
	float	f = nb;
	double	d = nb;

	(void)c;
	(void)i;
	(void)f;
	(void)d;
	return 0;
}
