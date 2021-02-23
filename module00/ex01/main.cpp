#include <iostream>
#include <string.h>
#include "contact.hpp"

int main()
{
	int		i;
	std::string	input;
	std::string	name;

	i = 0;
	input = "";
	while (input != "EXIT")
	{
		std::cin >> input;
		if (input == "ADD")
		{
			if (i > 8)
				std::cout << "Vous n'avez plus de place pour un nouveau contact\n";
			else
			{
				std::getline(std::cin, name);
				contact name;
				std::cout << name.f_name;
				i++;
			}
		}
		if (input == "SEARCH")
			std::cout << "...\n";
	}
}
