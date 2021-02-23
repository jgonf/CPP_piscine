#include <iostream>
#include "contact.hpp"

contact::contact(void)
{
	std::cout << "First name : ";
	std::getline(std::cin, this->f_name);
}
