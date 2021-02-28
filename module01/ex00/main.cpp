#include <iostream>
#include "Pony.hpp"

void	ponyOnTheStack(std::string name, int age, std::string astro)
{
	std::cout << "Un pony va bientot s'ajouter a la pile" << std::endl;

	pony Joly_Jumper(name, age, astro);
	Joly_Jumper.get_info();
	std::cout << "Malheureusement ce pony va disparaitre a la fin de cette fonction." << std::endl;
	return;
}

void	ponyOnTheHeap(std::string name, int age, std::string astro)
{
	std::cout << std::endl;
	std::cout << "Attention, vous allez assister a la creation d´un pony sur la Heap" << std::endl;
	pony *Rantanplan = new pony(name, age, astro);

	Rantanplan->get_info();
	std::cout << "Ce pony ne va pas disparaitre tout seul, il faut donc liberer la memoire avant de quitter la fonction." << std::endl;

	delete Rantanplan;
}

int	main()
{
	ponyOnTheStack("Joly Jumper", 2, "Balance");
	ponyOnTheHeap("Rantanplan", 5, "Capricorne");
}
