#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		//error
	}
	std::ofstream file_in;
	file_in.open(argv[1], std::fstream::in);
	if (file_in.is_open())
	{
		std::cout << "Cannot open in file" << std::endl;
		return (-1);
	}
	std::string filename = (std::string)argv[1] + ".replace";
	std::ofstream file_out (filename.c_str());
	if (file_out.is_open())
	{
		std::cout << "Cannot open out file" << std::endl;
		return (-1);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string buff;
	while ()
	{

	}
	return 0;
}
