/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:43:08 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 10:07:39 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zomb = new Zombie;

	zomb->set_name(name);
	zomb->set_type(this->_type);
	return (zomb);
}

void	ZombieEvent::randomChump(void)
{
	int index = (rand() % 11);	
	std::string name[11] = {"Joel", "Ellie", "Tess", "Tommy", "Marlene", "Riley", "Abby", "Dina", "Lev", "Yara", "Jesse"};
	
	Zombie	zomb;
	zomb.set_name(name[index]);
	zomb.set_type(this->_type);
	zomb.announce();
}
