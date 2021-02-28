/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:43:23 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/27 18:54:48 by jgonfroy         ###   ########.fr       */
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

void	Zombie::announce(void) const {
	std::cout << this->_name << " (" << this->_type << ") : Braiiiiiiinnnnsss ... " << std::endl; 
}
