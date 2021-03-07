/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 19:07:50 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 10:55:30 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

# include "AWeapon.hpp"
# include <iostream>

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(PowerFist const &src);
		virtual ~PowerFist(void);
		PowerFist	& operator=(PowerFist const & src);

		virtual void	attack() const;
};

#endif
