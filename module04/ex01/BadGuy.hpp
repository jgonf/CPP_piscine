/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BadGuy.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:34:24 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 14:49:18 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BADGUY_HPP
#define BADGUY_HPP

# include "Enemy.hpp"
# include <iostream>

class BadGuy : public Enemy
{
	public:
		BadGuy(void);
		BadGuy(BadGuy const &src);
		virtual ~BadGuy(void);
		BadGuy	& operator=(BadGuy const & src);
};


#endif
