/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:36:56 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/02 09:19:56 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << "Default constructor, operator constructor, construction by initilization and copy constructor : " << std::endl;
	std::cout << "Here come Tony and Marcel." << std::endl;
	FragTrap jdoe;
	FragTrap tony ("Tony");
	FragTrap marcel ("Marcel");
	FragTrap angel (tony);
	jdoe = marcel;


	std::cout << std::endl << "Now that the presentation are done, let's fight!" << std::endl;
	jdoe.rangedAttack("poor Tony");
	tony.takeDamage(20);
	tony.meleeAttack("John's mama");
	marcel.meleeAttack("everyone around");
	marcel.takeDamage(120);

	std::cout << std::endl << "Time to heal..." << std::endl;
	marcel.beRepaired(150);
	tony.beRepaired(3);

	std::cout << std::endl << "Let's the vaulthunter_dot_exe begin..." << std::endl;
	jdoe.vaulthunter_dot_exe("God himself");
	jdoe.vaulthunter_dot_exe("the creator of this repetitive project");
	jdoe.vaulthunter_dot_exe("the life, the universe and everything");
	tony.vaulthunter_dot_exe("broken coffee machine");
	jdoe.vaulthunter_dot_exe("syntax error");
	jdoe.vaulthunter_dot_exe("his ex");

	std::cout << std::endl << "Sadly, everyone has to die one day" << std::endl;
}
