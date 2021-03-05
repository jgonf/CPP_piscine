/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:33:17 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/04 22:26:22 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

	Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

	Victim::Victim(Victim const &src)
{
	*this = src;
}

	Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim	&Victim::operator=(Victim const &src)
{
	this->_name = src.get_name();
	return *this;
}

std::string	Victim::get_name(void) const
{
	return _name;
}

void		Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream	& operator<<(std::ostream & o, Victim const & src)
{
	std::string name = src.get_name();

	o << "I am " << name << " and I like otters!" << std::endl;
	return o;
}
