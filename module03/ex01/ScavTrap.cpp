/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:28:30 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/02 09:15:00 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

	ScavTrap::ScavTrap(void):_name("Samantha")
{
	srand(time(NULL));
	std::cout << "Soooooo... how are things?" << std::endl;
}

	ScavTrap::ScavTrap(std::string name):_name(name)
{
	srand(time(NULL));
	std::cout << "Hey, best friend!" << std::endl;
}

	ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << "No way! That's, like, my third favorite kind of magic!" << std::endl;
}

	ScavTrap::~ScavTrap(void)
{
	std::cout << "Shouldn't you be murdering something about?" << std::endl;
}

ScavTrap	& ScavTrap::operator=(ScavTrap const &src)
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

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Scary ScavTrap " << _name << " doing attacks at range at " << target << " and causing " << _ranged << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Scary ScavTrap " << _name << " doing attacks in a melee at " << target << " and causing " << _melee << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string list_challenge[5] = {"eat more biscuits in a minute.", "do a better scary face.", "spit further.", "speak with a fake brittish accent.", "find a better challenge idea"};

 	std::cout << _name << " challenge " << target <<" to " << list_challenge[rand() % 5] << std::endl;
}
