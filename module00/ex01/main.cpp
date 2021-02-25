#include "phonebook.hpp"

int main()
{
	int		i;
	int		j;
	int		index;
	std::string	input;
	std::string	name;
	contact		list_contact[8];

	i = 0;
	input = "";
	while (input != "EXIT")
	{
		getline(std::cin, input);
		if (input == "ADD")
		{
			if (i > 7)
				std::cout << "Vous n'avez plus de place pour un nouveau contact" << std::endl;
			else
			{
				list_contact[i].init();
				i++;
			}
		}
		if (input == "SEARCH")
		{
			j = 0;
			while (j < i)
			{
				list_contact[j].get_info(j);
				j++;
			}
			std::cout << "Quel contact voulez-vous afficher (donner l'index)" << std::endl;
			std::string tmp;
			getline(std::cin, tmp);
			index = (int)(tmp.at(0) - 48);
			if (index < 0 || index >= i)
				std::cout << "Ce n'est pas un contact" << std::endl;
		}
	}
}
