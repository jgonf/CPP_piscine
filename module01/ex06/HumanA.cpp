/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 08:32:56 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/01 09:03:43 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

	HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon_type (weapon){}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon_type.getType() << std::endl;
}
