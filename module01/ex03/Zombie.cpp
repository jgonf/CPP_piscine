/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:43:23 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 16:06:01 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void) {}

Zombie::~Zombie (void) {
	std::cout << this->_name << " (" << this->_type << ") : Byyyyeee... " << std::endl; 
}

void	Zombie::set_name(std::string name) {
	this->_name = name;
}

void	Zombie::set_type(std::string type) {
	this->_type = type;
}
/*
std::string	Zombie::get_name(void) const {
	return (this->_name);
}

std::string	Zombie::get_type(void) const {
	return (this->_type);
}
*/

void	Zombie::announce(void) const {
	std::cout << this->_name << " (" << this->_type << ") : Braiiiiiiinnnnsss ... " << std::endl; 
}
