#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T * array, size_t size, void f(T const & ref))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void display(T const & val)
{
	std::cout << val << " ";
}

 #endif