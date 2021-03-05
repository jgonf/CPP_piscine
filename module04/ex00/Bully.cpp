/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bully.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:33:17 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/05 22:04:38 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bully.hpp"

	Bully::Bully(void): Victim("illegal"){}

	Bully::Bully(std::string name): Victim(name)
{
	std::cout << "Hey there!" << std::endl;
}

	Bully::Bully(Bully const &src): Victim(src)
{
	*this = src;
}

	Bully::~Bully(void)
{
	std::cout << "Don't kill me plea" << std::endl;
}

Bully	&Bully::operator=(Bully const &src)
{
	this->_name = src.get_name();
	return *this;
}

void	Bully::getPolymorphed(void)	const
{
	std::cout << _name << " has been turned into Arthur Dent!" << std::endl;
}
