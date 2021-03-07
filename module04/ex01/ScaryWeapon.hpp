/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScaryWeapon.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:53:37 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 14:59:04 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARYWEAPON_HPP
#define SCARYWEAPON_HPP

# include "AWeapon.hpp"
# include <iostream>

class ScaryWeapon : public AWeapon
{
	public:
		ScaryWeapon(void);
		ScaryWeapon(ScaryWeapon const &src);
		virtual ~ScaryWeapon(void);
		ScaryWeapon	& operator=(ScaryWeapon const & src);

		virtual void	attack() const;
};

#endif
