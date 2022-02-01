#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (-1);
	}
	std::ifstream file_in;
	file_in.open(argv[1], std::ifstream::in);
	if (file_in.is_open() == false)
	{
		std::cout << "Cannot open in file" << std::endl;
		return (-1);
	}
	std::string filename = (std::string)argv[1] + ".replace";
	std::ofstream file_out(filename.c_str());
	if (file_out.is_open() == false)
	{
		std::cout << "Cannot open out file" << std::endl;
		return (-1);
	}
	std::string s1 = (std::string)argv[2];
	std::string s2 = (std::string)argv[3];
	std::string buff;
	int			pos;

	pos = 0;
	while (getline(file_in, buff))
	{
		if ((pos = buff.find(s1)) != -1)
		{
			buff.erase(pos, s1.length());
			buff.insert(pos, s2);
		}
		file_out << buff << "\n";
	}
	file_in.close();
	file_out.close();
	return (0);
}
