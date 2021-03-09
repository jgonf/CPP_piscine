/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:56:33 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/09 11:24:22 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

	Cure::Cure(void): AMateria("cure") {}

	Cure::Cure(Cure const &src): AMateria(src) {}

	Cure::~Cure(void) {}

Cure &	Cure::operator=(Cure const & src)
{
	_xp = src.getXP();

	return *this;
}

AMateria*	Cure::clone(void) const
{
	AMateria *tmp = new Cure;

	return tmp;
}

void	Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
