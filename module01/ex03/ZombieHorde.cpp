/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 10:19:59 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 16:22:00 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

	ZombieHorde::ZombieHorde(int p_N): _N(p_N)
{
	int	i;

	_horde = new Zombie[_N];
	for (i = 0; i < _N; i++)
	{
		_horde[i].set_name(_rand_name());
		_horde[i].set_type(_rand_type());
	}
}

	ZombieHorde::~ZombieHorde(void)
{
	delete []  _horde;
}


std::string	ZombieHorde::_rand_name(void) const
{
	int index = (rand() % 11);	
	std::string name[11] = {"Joel", "Ellie", "Tess", "Tommy", "Marlene", "Riley", "Abby", "Dina", "Lev", "Yara", "Jesse"};

	return (name[index]);
}

std::string	ZombieHorde::_rand_type(void) const
{
	int index = (rand() % 6);	
	std::string type[6] = {"Runners", "Stalkers", "Clickers", "Bloaters", "Shamblers", "The Rat King"};

	return (type[index]);
}


void	ZombieHorde::announce(void) const 
{
	int	i;

	for (i = 0; i < this->_N; i++)
		_horde[i].announce();
}
