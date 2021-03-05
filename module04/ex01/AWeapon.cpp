/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 23:14:40 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/05 23:30:40 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

	AWeapon::AWeapon(void) {}

	AWeapon::AWeapon(std::string const & name, int apcost, int damage):
_name(name), _apcost(apcost), _damage(damage) {}

	AWeapon::~AWeapon(void) {}


AWeapon &	AWeapon::operator=(AWeapon const & src)
{
	_name = src.getName();
	_apcost = src.getAPCost();
	_damage = src.getDamage();
	return *this;
}

std::string const	AWeapon::getName(void) const
{
	return _name;
}

int	AWeapon::getAPCost(void) const
{
	return _apcost;
}

int	AWeapon::getDamage(void) const
{
	return _damage;
}
