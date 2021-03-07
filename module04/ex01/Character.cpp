/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:15:55 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 14:52:56 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

	Character::Character(void) {}

	Character::Character(std::string const & name): _name(name), _ap(40), _weapon(NULL) {}

	Character::Character(Character const & src) {*this = src;}

	Character::~Character(void) {}

Character	&Character::operator=(Character const & src)
{
	(void)src;
	return *this;
}

void	Character::recoverAP(void)
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void	Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

int	Character::getAP(void) const { return _ap; }

std::string const	Character::getName(void) const { return _name; }

std::string const	Character::getWeaponName(void) const
{
	if (_weapon == NULL)
		return "\0";
	return _weapon->getName();
}


void	Character::attack(Enemy *enemy)
{
	if (_weapon == NULL || _ap - _weapon->getAPCost() < 0)
		return ;
	_ap -= _weapon->getAPCost();
	std::cout << _name << " attacks " << enemy->getType() << " with a ";
	std::cout << _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::ostream	&operator<<(std::ostream & o, Character const &src)
{
	o << src.getName() << " has " << src.getAP() << " AP and ";
	if (src.getWeaponName() != "\0")
		o << "wields a " << src.getWeaponName() << std::endl;
	else
		o << "is unarmed" << std::endl;
	return o;
}

