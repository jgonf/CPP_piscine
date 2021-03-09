/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:11:36 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/09 10:00:20 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Bully.hpp"

#include <iostream>

int main()
{
	Sorcerer robert("Robert", "the Magnificient");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
/*
	std::cout << std::endl << "	- Mes tests : -" << std::endl;
	std::cout << "-> tests forme canonique : " << std::endl;

	Sorcerer merlin(robert);
	Sorcerer harry("Harry", "the one with the scar");
	robert = harry;

	std::cout << robert;

	Victim bob("Bob");
	Victim jenny(bob);
	Victim raoult("Raoult");
	bob = raoult;

	std::cout << jenny;

	std::cout << std::endl << "-> mon autre classe victime : " << std::endl;
	Bully goerges("Goerges");
	std::cout << goerges; 
	harry.polymorph(goerges);
	std::cout << std::endl;
*/
}
