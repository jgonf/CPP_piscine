/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 09:05:44 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/01 09:27:06 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include "Weapon.hpp"

class HumanB{
	private:
		std::string	_name;
		Weapon		*_weapon_type;

	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack(void) const;
};

#endif
