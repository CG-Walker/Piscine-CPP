#include <iostream>
#include <stdint.h>
//#include "Data.hpp"

struct Data
{
	std::string value;
};

uintptr_t serialize(Data * ptr)
{
	return	(reinterpret_cast<uintptr_t>(ptr));
}

Data * deserialize(uintptr_t raw)
{
	return	(reinterpret_cast<Data *>(raw));
}

int main()
{
	Data data;
	uintptr_t data_serialized; 
	Data * data_deserialized;
	
	data.value = "First data test";
	data_serialized = serialize(&data);
	data_deserialized = deserialize(data_serialized);

	std::cout	<< "Data (Original) address: " << &data << std::endl
				<< "Data (Deserialized) address: " << data_deserialized << std::endl
				<< "Data (Original) value: " << data.value << std::endl
				<< "Data (Deserialized) value: " << data_deserialized->value << std::endl;
	return 0;
}
