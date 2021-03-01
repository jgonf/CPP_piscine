/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:28:30 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/01 23:26:01 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

	FragTrap::FragTrap(void): _hit(100), _max_hit(100), _energy(100),
_max_energy(100), _lvl(1), _melee(30), _ranged(20), _armor(5), _name("Angel")
{
	std::cout << "Are... are you my father?" << std::endl;
}

	FragTrap::FragTrap(std::string name): _hit(100), _max_hit(100), _energy(100),
_max_energy(100), _lvl(1), _melee(30), _ranged(20), _armor(5), _name(name)
{
	std::cout << "Claptrap -- start bootup sequence" << std::endl;
}

	FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << "Ahh-- one of my very first startup sequences! The memories..." << std::endl;
}

	FragTrap::~FragTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap	& FragTrap::operator=(FragTrap const &src)
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _ranged << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " << target << " in a melee, causing " << _melee << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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

