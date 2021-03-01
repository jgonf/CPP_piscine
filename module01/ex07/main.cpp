#include <iostream>

void	replace(std::string filename, std::string s1, std::string s2);

int main()
{
	replace("hobbits.txt", "Hobbit", "Gnome");
	replace("corbeau_renard", "Maître Corbeau, sur un arbre perché,\nTenait en son bec un fromage.", "Blablabla");
}

