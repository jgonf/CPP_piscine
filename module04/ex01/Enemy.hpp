/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 19:45:43 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/06 23:42:45 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
	private:
		int		_hp;
		std::string	_type;

		Enemy(void);

	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &src);
		virtual ~Enemy();
		Enemy & operator=(Enemy const & src);

		std::string const	getType(void) const;
		int			getHP(void) const;
		virtual void		takeDamage(int damage);
};

#endif
