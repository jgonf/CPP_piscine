/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 11:14:52 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 14:31:00 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

	PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21) {}

	PlasmaRifle::PlasmaRifle(PlasmaRifle const &src): AWeapon(src) {}

	PlasmaRifle::~PlasmaRifle(void) {}

PlasmaRifle	& PlasmaRifle::operator=(PlasmaRifle const & src)
{
	if (this != &src)
	{
		_name = src.getName();
		_apcost = src.getAPCost();
		_damage = src.getDamage();
	}
	return *this;
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "*piouuu piouuu piouuu *" << std::endl;
}
