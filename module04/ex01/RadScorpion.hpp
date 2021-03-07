/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:42:34 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 14:41:08 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

# include "Enemy.hpp"
# include <iostream>

class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const &src);
		virtual ~RadScorpion(void);
		RadScorpion	& operator=(RadScorpion const & src);
};

#endif
