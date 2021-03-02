/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:28:30 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/02 16:19:22 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

	ClapTrap::ClapTrap(void)
{
	srand(time(NULL));
	std::cout << "Default constructor." << std::endl;
}

	ClapTrap::ClapTrap(unsigned int hit, unsigned int mhit, unsigned int nrj,
unsigned int mnrj, unsigned int lvl, unsigned int melee, unsigned int ranged,
unsigned int armor, std::string name)
{
	srand(time(NULL));
	std::cout << "Constructor by initialisation" << std::endl;

	_hit = hit;
	_max_hit = mhit;
	_energy = nrj;
	_max_energy = mnrj;
	_lvl = lvl;
	_melee = melee;
	_ranged = ranged;
	_armor = armor;
	_name = name;
}

	ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "Constructor by copy" << std::endl;
}

	ClapTrap::~ClapTrap(void)
{
	std::cout << "Soulless destructor" << std::endl;
}

ClapTrap	& ClapTrap::operator=(ClapTrap const &src)
{
	_hit = src._hit;
	_max_hit = src._max_hit;
	_energy = src._energy;
	_max_energy = src._max_energy;
	_lvl = src._lvl;
	_melee = src._melee;
	_ranged = src._ranged;
	_armor = src._armor;
	_name = src._name;

	return *this;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount -= _armor;
	if (amount < 0)
		amount = 0;
	else if (amount > _hit)
		amount = _hit;
	_hit -= amount;
	std::cout << "Oh no! " << _name << " lost " << amount << " points of damage!" << std::endl;
	if (_hit == 0)
		std::cout << "Be careful, you don't have hit points anymore." << std::endl;
	else
		std::cout << "Lucky for you, you still have " << _hit << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount < 0)
		amount = 0;
	else if (amount + _hit > 100)
		amount = 100 - _hit;
	_hit += amount;
	std::cout << "What a day! " << _name << " just gained " << amount << " points of healing!" << std::endl;
	if (_hit == 100)
		std::cout << "Waouh, you're full alive now." << std::endl;
	else
		std::cout << "Feel better? You now have " << _hit << " hit points" << std::endl;
}
