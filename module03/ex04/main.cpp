/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:36:56 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/03 22:38:17 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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
	angel.meleeAttack("John's mama");
	marcel.meleeAttack("everyone around");
	marcel.takeDamage(120);

	std::cout << std::endl << "Time to heal..." << std::endl;
	marcel.beRepaired(150);
	tony.beRepaired(3);

	std::cout << std::endl << "Let's the vaulthunter_dot_exe begin..." << std::endl;
	jdoe.vaulthunter_dot_exe("God himself");
	jdoe.vaulthunter_dot_exe("the creator of this repetitive project");
	jdoe.vaulthunter_dot_exe("the life, the universe and everything");
	angel.vaulthunter_dot_exe("broken coffee machine");
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

	std::cout << std::endl;
	ClapTrap clap;
	std::cout << std::endl << "Ninjas just appeared... and dispappeared." << std::endl;
	NinjaTrap ninj;
	NinjaTrap korra ("Korra");
	NinjaTrap avatar (ninj);
	NinjaTrap aang = ninj;
	korra.rangedAttack("the first one who don't laugh");
	avatar.meleeAttack("his own toe by accident");
	korra.takeDamage(26);
	avatar.takeDamage(14);
	aang.beRepaired(15);
	korra.ninjaShoebox(clap);
	korra.ninjaShoebox(jdoe);
	korra.ninjaShoebox(vaness);
	korra.ninjaShoebox(avatar);
	korra.ninjaShoebox(clap);

	std::cout << std::endl;
	std::cout << "Did someone say Super?" << std::endl;
	SuperTrap sirens;
	SuperTrap gotham;
	SuperTrap harley ("HQuinn");
	SuperTrap ivy (sirens);
	SuperTrap selina = gotham;
	sirens.rangedAttack("too tired to think");
	harley.meleeAttack("the next module");
	gotham.takeDamage(10);
	ivy.takeDamage(20);
	ivy.beRepaired(15);
	harley.ninjaShoebox(clap);
	harley.ninjaShoebox(jdoe);
	harley.ninjaShoebox(vaness);
	harley.ninjaShoebox(avatar);
	harley.ninjaShoebox(clap);
	selina.vaulthunter_dot_exe("42");
	gotham.vaulthunter_dot_exe("my cat");

	std::cout << std::endl << "Sadly, everyone has to die one day" << std::endl;
}
