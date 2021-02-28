/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 22:17:57 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 22:42:14 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon {
	private:
		std::string	_type;
	public:
					Weapon(std::string p_type);
		std::string const	&getType(void) const;
		void			setType(std::string type);
};

#endif
