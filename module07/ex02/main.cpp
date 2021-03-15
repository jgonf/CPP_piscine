#include "Array.hpp"
#include "Test.hpp"
#include <iostream>

int main()
{
	Array <char>	empty;
	Array <char>	char_array(5);

	std::cout << "Test the assignation :" << std::endl;
	char_array[2] = 'a';
	empty = char_array;
	std::cout << empty[2] << std::endl;
	char_array[2] = 'b';
	std::cout << empty[2] << std::endl;

	std::cout << std::endl << "Test the copy" << std::endl;
	Array <char >copy(char_array);
	std::cout << copy[2] << std::endl;


	Array<int> int_array(1);

	std::cout << std::endl << "Test error :" << std::endl;
	try {
		int_array[0] = 1;
		std::cout << "int_array[0] = " << int_array[0] << std::endl;
		int_array[1] = 2;
		std::cout << "int_array[1] = " << int_array[1] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		int_array[-1] = 1;
		std::cout << "int_array[-1] = " << int_array[-1] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	Array<Test>	test_array(12);
	Test		tmp(5);

	test_array[11] = tmp;
	std::cout << std::endl << "Test size :" << std::endl;
	std::cout << test_array.size() << std::endl;
	std::cout << std::endl << "Test type complexe : " << std::endl;
	std::cout << test_array[11].getN() << std::endl;
}
