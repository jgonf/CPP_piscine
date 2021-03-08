/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:32:43 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/08 18:56:47 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

	Ice::Ice(void): AMateria("ice") {}

	Ice::Ice(Ice const &src): AMateria(src) {}

	Ice::~Ice(void) {}

Ice &	Ice::operator=(Ice const & src)
{
	_xp = src.getXP();

	return *this;
}

AMateria*	Ice::clone(void) const
{
	AMateria* tmp = new Ice;

	return tmp;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
