/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:43:07 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/08 16:29:16 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

	AMateria::AMateria(void) {}

	AMateria::AMateria(std::string const & type): _type(type), _xp(0) {}

	AMateria::AMateria(AMateria const & src): _type(src.getType()), _xp(src.getXP()) {}

	AMateria::~AMateria(void) {}

AMateria &	AMateria::operator=(AMateria const & src)
{
	_xp = src.getXP();
	return *this;
}

std::string const &	AMateria::getType(void) const
{
	return _type;
}

unsigned int	AMateria::getXP(void) const
{
	return _xp;
}

void		AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}
