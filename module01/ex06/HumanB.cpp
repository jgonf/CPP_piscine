/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 09:14:16 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/01 09:26:51 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

	HumanB::HumanB(std::string name): _name(name) {}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon_type = &weapon;
}

void	HumanB::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon_type->getType() << std::endl;
}
