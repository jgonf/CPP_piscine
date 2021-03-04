/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:36:56 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/03 17:07:09 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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

	std::cout << std::endl << "Now come the ScavTrap" << std::endl;
	ScavTrap janedoe;
	ScavTrap pampouse;
	ScavTrap vaness("Vaness");
	ScavTrap gregory(janedoe);
	ScavTrap mowg = pampouse;
	vaness.rangedAttack("the next exercice");
	gregory.meleeAttack("the next one who ask for fun");
	vaness.takeDamage(4);
	mowg.takeDamage(8);
	vaness.beRepaired(15);
	vaness.challengeNewcomer("new comer");
	janedoe.challengeNewcomer("newest comer");
	janedoe.challengeNewcomer("newest comer");
	janedoe.challengeNewcomer("newest comer");

	std::cout << std::endl << "Sadly, everyone has to die one day" << std::endl;
}
