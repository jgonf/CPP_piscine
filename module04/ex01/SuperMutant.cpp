/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:57:18 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 14:41:47 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

	SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

	SuperMutant::SuperMutant(SuperMutant const & src): Enemy(src)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

	SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant	&SuperMutant::operator=(const	SuperMutant &src)
{
	(void)src;
	return *this;
}

void	SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	Enemy::takeDamage(damage);
}
