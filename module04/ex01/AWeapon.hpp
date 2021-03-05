/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 22:40:36 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/05 23:27:17 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	private:
		AWeapon(void);

	protected:
		std::string	_name;
		int		_apcost;
		int		_damage;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &src);
		virtual ~AWeapon();
		AWeapon	& operator=(AWeapon const & src);

		std::string const	getName() const;
		int			getAPCost() const;
		int			getDamage() const;
		virtual void		attack() const = 0;
};

#endif
