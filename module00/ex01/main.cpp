#include <iostream>
#include <string.h>
#include "contact.hpp"

int main()
{
	int		i;
	std::string	input;
	std::string	name;
	contact		list_contact[8];
	
	i = 0;
	input = "";
	while (input != "EXIT")
	{
//		std::cin.ignore();
		getline(std::cin, input);
		if (input == "ADD")
		{
			if (i > 8)
				std::cout << "Vous n'avez plus de place pour un nouveau contact" << std::endl;
			else
			{
				list_contact[i].init();
				list_contact[i].get_info();
				i++;
			}
		}
		if (input == "SEARCH")
			std::cout << "...\n";
	}
}
