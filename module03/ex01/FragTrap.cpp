/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:28:30 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/02 09:15:55 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

	FragTrap::FragTrap(void): _name("Marcel")
{
	srand(time(NULL));
	std::cout << "Are... are you my father?" << std::endl;
}

	FragTrap::FragTrap(std::string name): _name(name)
{
	srand(time(NULL));
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

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string list_attack[5] = {"Senseless Sacrifice", "Shhhh.... Trap!", "Miniontrap", "Laser Inferno", "Clap-In-The-Box"};

 	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	if (_energy < 25)
	{
		std::cout << "Oh no! I'm out of energy. Next time it'll be awesome, I promise!" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << _name << " did a spectacular " << list_attack[rand() % 5] << " attacks on " << target;
	std::cout << " causing " << rand() % 40 << " points of damage!" << std::endl;
	_energy -= 25;
}
