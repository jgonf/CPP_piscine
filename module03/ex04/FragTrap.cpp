/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:28:30 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/03 22:27:13 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

	FragTrap::FragTrap(void): ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, "Marcel")
{
	srand(time(NULL));
	std::cout << "Are... are you my father?" << std::endl;
}

	FragTrap::FragTrap(std::string name): ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, name)
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

unsigned int	FragTrap::set_hit(void)
{
	_hit = 100;
	return _hit;
}

unsigned int	FragTrap::set_max_hit(void)
{
	_max_hit = 100;
	return _max_hit;

}

unsigned int	FragTrap::set_ranged(void)
{
	_ranged = 20;
	return _ranged;
}

unsigned int	FragTrap::set_armor(void)
{
	_armor = 5;
	return _armor;
}

void	FragTrap::set_name(std::string name)
{
	_name = name;
}
