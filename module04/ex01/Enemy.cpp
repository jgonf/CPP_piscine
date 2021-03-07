/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 23:10:27 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 11:35:38 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

	Enemy::Enemy(void) {}

	Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type) {}

	Enemy::Enemy(Enemy const &src) {*this = src;}

	Enemy::~Enemy(void) {}


Enemy &	Enemy::operator=(Enemy const & src)
{
	_hp =  src.getHP();
	_type = src.getType();
	return *this;
}

std::string const	Enemy::getType(void) const
{
	return _type;
}

int	Enemy::getHP(void) const
{
	return _hp;
}

void	Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	_hp -= damage;
	if (_hp < 0)
		_hp = 0;
	return ;
}
