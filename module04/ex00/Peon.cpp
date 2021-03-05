/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:33:17 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/04 22:26:22 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

	Peon::Peon(std::string name): Victim::Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

	Peon::Peon(Peon const &src)
{
	*this = src;
}

	Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon	&Peon::operator=(Peon const &src)
{
	this->_name = src.get_name();
	return *this;
}
