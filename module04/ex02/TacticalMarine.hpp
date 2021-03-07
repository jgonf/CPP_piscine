/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:44:53 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 20:25:22 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const & src);
		virtual ~TacticalMarine(void);
		TacticalMarine	&operator=(TacticalMarine const & src);

		virtual ISpaceMarine* clone(void) const;
		virtual void	battleCry(void) const;
		virtual void	rangedAttack(void) const;
		virtual void	meleeAttack(void) const;
};

#endif
