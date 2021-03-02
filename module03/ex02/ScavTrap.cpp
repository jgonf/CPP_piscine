/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:28:30 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/02 15:50:48 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

	ScavTrap::ScavTrap(void): ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, "Samantha")
{
	srand(time(NULL));
	std::cout << "Soooooo... how are things?" << std::endl;
}

	ScavTrap::ScavTrap(std::string name): ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, name)
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

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string list_challenge[5] = {"eat more biscuits in a minute.", "do a better scary face.", "spit further.", "speak with a fake brittish accent.", "find a better challenge idea"};

 	std::cout << _name << " challenge " << target <<" to " << list_challenge[rand() % 5] << std::endl;
}
