/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 08:27:27 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/01 09:03:08 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA {
	private:
		std::string	_name;
		Weapon		&_weapon_type;

	public:
		HumanA(std::string name, Weapon &weapon);
		void attack(void) const;
};
#endif
