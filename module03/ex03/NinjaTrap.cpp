/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:28:30 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/02 18:03:18 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NinjaTrap.hpp"

	NinjaTrap::NinjaTrap(void): ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, "Yamakasi")
{
	srand(time(NULL));
	std::cout << "Hello there, can you see me?" << std::endl;
}

	NinjaTrap::NinjaTrap(std::string name): ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, name)
{
	srand(time(NULL));
	std::cout << "Hi, I'm a ninja" << std::endl;
}

	NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;
	std::cout << "I'm the copy of a ninja" << std::endl;
}

	NinjaTrap::~NinjaTrap(void)
{
	std::cout << "I thought ninjas were immortals..." << std::endl;
}

NinjaTrap	& NinjaTrap::operator=(NinjaTrap const &src)
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

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "Ranged attack of the ninja " << _name << " at " << target << " causing " << _ranged << " points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "Melee attack of the ninja " << _name << " at " << target << " causing " << _melee << " points of damage!" << std::endl;
}

int	NinjaTrap::ninja_attack(void)
{
	std::cout << "Don't blink, ninja attack incoming." << std::endl;
	if (_energy >= 25)
		return 1;
	std::cout << "Oh, I think I need to rest a little bit instead." << std::endl;
	return 0;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
	(void)target;
	if (!ninja_attack())
		return;
	_energy -= 25;
	std::cout << "Invisible ninja " << _name << " send pepper in the eyes of sacry ClapTrap machine." << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	(void)target;
	if (!ninja_attack())
		return;
	_energy -= 25;
	std::cout << "Invisible ninja " << _name << " did a crooked before running away of Big Bad FragTrap." << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	(void)target;
	if (!ninja_attack())
		return;
	_energy -= 25;
	std::cout << "Invisible ninja " << _name << " saw a ScavTrap and pinched its nose." << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	(void)target;
	if (!ninja_attack())
		return;
	_energy -= 25;
	std::cout << "Invisible ninja " << _name << " did a chifoumi with another ninja and it's was so fast." << std::endl;

}
