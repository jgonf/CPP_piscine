/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 22:31:07 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 22:47:03 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

	Weapon::Weapon(std::string p_type): _type(p_type)
{}

void	Weapon::setType(std::string type)
{
	_type = type;
}

std::string const &Weapon::getType(void) const
{
	std::string const	&ref_type = _type;
	return (ref_type);
}
