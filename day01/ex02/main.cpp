#include <iostream>

int main()
{
	std::string 	str 	= "HI THIS IS BRAIN";
	std::string * 	str_ptr = &str;
	std::string &	str_ref = str;

	std::cout << "String via str : " << str << std::endl;
	std::cout << "String via str_ptr : " << *str_ptr << std::endl;
	std::cout << "String via str_ref : " << str_ref << std::endl << std::endl;

	std::cout << "Address via str : " << &str << std::endl;
	std::cout << "Address via str_ptr : " << str_ptr << std::endl;
	std::cout << "Address via string_ref : " << &str_ref << std::endl;
	return 0;
}
