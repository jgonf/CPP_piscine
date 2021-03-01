/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:36:56 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/01 23:24:07 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << "Default constructor and construction by initilization : " << std::endl;
	FragTrap *jdoe = new FragTrap;
	FragTrap *tony = new FragTrap("Tony");
	FragTrap *angel = jdoe;

	std::cout << std::endl << "Now, we fight!" << std::endl;
	jdoe->rangedAttack("poor Tony");
	tony->takeDamage(20);
	tony->meleeAttack("John's mama");
	angel->takeDamage(120);

	std::cout << std::endl << "Time to heal..." << std::endl;
	angel->beRepaired(150);
	tony->beRepaired(3);

}
