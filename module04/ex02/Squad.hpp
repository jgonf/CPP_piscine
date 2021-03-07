/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:48:04 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 19:25:14 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	private:
		int		_count;
		ISpaceMarine**	_units;

	public:
		Squad(void);
		Squad(Squad const & src);
		virtual ~Squad(void);
		Squad	&operator=(Squad const & src);

		virtual int	getCount(void) const;
		virtual	ISpaceMarine*	getUnit(int n) const;
		virtual int	push(ISpaceMarine* unit);
};

#endif
