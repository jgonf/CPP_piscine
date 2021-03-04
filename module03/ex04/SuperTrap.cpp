/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:27:10 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/03 22:30:40 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

	SuperTrap::SuperTrap(void)
{
	srand(time(NULL));
	_hit = FragTrap::set_hit();
	_max_hit = FragTrap::set_max_hit();
	_energy = NinjaTrap::set_energy();
	_max_energy = NinjaTrap::set_max_energy();
	_melee = NinjaTrap::_melee;
	_melee = NinjaTrap::set_melee();
	_ranged = FragTrap::set_ranged();
	_armor = FragTrap::set_armor();
	_lvl = 1;
	_name = "Ivy";
	NinjaTrap::set_name(_name);
	FragTrap::set_name(_name);
	std::cout << "Heyyyy Super ! " << std::endl;
}

	SuperTrap::SuperTrap(std::string name)
{
	srand(time(NULL));
	_hit = FragTrap::set_hit();
	_max_hit = FragTrap::set_max_hit();
	_energy = NinjaTrap::set_energy();
	_max_energy = NinjaTrap::set_max_energy();
	_melee = NinjaTrap::set_melee();
	_ranged = FragTrap::set_ranged();
	_armor = FragTrap::set_armor();
	_lvl = 1;
	_name = name;
	NinjaTrap::set_name(_name);
	FragTrap::set_name(_name);
	std::cout << "I like the name ! " << std::endl;
}

	SuperTrap::SuperTrap(SuperTrap const &src)
{
	*this = src;
	FragTrap::set_hit();
	FragTrap::set_max_hit();
	NinjaTrap::set_energy();
	NinjaTrap::set_max_energy();
	NinjaTrap::set_melee();
	FragTrap::set_ranged();
	FragTrap::set_armor();
	NinjaTrap::set_name(_name);
	FragTrap::set_name(_name);

	std::cout << "A copy? Nice work dude ! " << std::endl;
}

	SuperTrap::~SuperTrap(void)
{
	std::cout << "Are you sure? I'm too young to die..." << std::endl;
}

SuperTrap	& SuperTrap::operator=(SuperTrap const &src)
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

