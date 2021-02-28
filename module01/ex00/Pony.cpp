#include <iostream>
#include "Pony.hpp"

	pony::pony(std::string p_name, int p_age, std::string p_astro): _name(p_name), _age(p_age), _astro(p_astro)
{
	std::cout << std::endl << "Oh un jolie pony vient de naitre !" << std::endl;
}

	pony::~pony()
{
	std::cout << std::endl << "Oh no! Un jolie pony vient de deceder. RIP !" << std::endl;
}

void	pony::get_info(void) const
{
	std::cout << "Nom : " << this->_name << std::endl;
	std::cout << "Age : " << this->_age << std::endl;
	std::cout << "Signe astrologie : " << this->_astro << std::endl;
}
