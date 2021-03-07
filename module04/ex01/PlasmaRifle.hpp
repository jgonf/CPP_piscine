/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 11:09:59 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 10:55:45 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

# include "AWeapon.hpp"
# include <iostream>

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &src);
		virtual ~PlasmaRifle(void);
		PlasmaRifle	& operator=(PlasmaRifle const & src);

		virtual void	attack() const;
};

#endif
