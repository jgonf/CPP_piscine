/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:51:42 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 14:41:20 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

	RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

	RadScorpion::RadScorpion(RadScorpion const & src): Enemy(src) {}

	RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion	&RadScorpion::operator=(const	RadScorpion &src)
{
	(void)src;
	return *this;
}
