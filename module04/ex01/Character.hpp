/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:09:06 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 14:14:29 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>

class Character
{
	private:
		std::string	_name;
		int		_ap;
		AWeapon		*_weapon;

		Character(void);

	public:
		Character(std::string const & name);
		Character(Character const & src);
		~Character(void);
		Character & operator=(Character const & src);

		void			recoverAP(void);
		void			equip(AWeapon* weapon);
		void			attack(Enemy* enemy);
		int			getAP(void) const;
		std::string const	getName(void) const;
		std::string const	getWeaponName(void) const;
};

std::ostream	& operator<<(std::ostream & o, Character const & src);
#endif
