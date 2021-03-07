/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:26:50 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 20:28:38 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & src);
		virtual ~AssaultTerminator(void);
		AssaultTerminator	&operator=(AssaultTerminator const & src);

		virtual ISpaceMarine* clone(void) const;
		virtual void	battleCry(void) const;
		virtual void	rangedAttack(void) const;
		virtual void	meleeAttack(void) const;
};


#endif
