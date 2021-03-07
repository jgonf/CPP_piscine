/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:31:21 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 19:24:24 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual	ISpaceMarine*	clone(void) const = 0;
		virtual void	battleCry(void) const = 0;
		virtual void	rangedAttack(void) const = 0;
		virtual void	meleeAttack(void) const = 0;
};

#endif
