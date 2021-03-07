/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScaryWeapon.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:59:40 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 15:33:36 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScaryWeapon.hpp"

	ScaryWeapon::ScaryWeapon(void): AWeapon("Scary Weapon", 40, 80) {}

	ScaryWeapon::ScaryWeapon(ScaryWeapon const &src): AWeapon(src) {}

	ScaryWeapon::~ScaryWeapon(void) {}

ScaryWeapon	& ScaryWeapon::operator=(ScaryWeapon const & src)
{
	if (this != &src)
	{
		_name = src.getName();
		_apcost = src.getAPCost();
		_damage = src.getDamage();
	}
	return *this;
}

void	ScaryWeapon::attack(void) const
{
	std::cout << "* bouyah *" << std::endl;
}
