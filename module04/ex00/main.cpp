/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 22:11:36 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/04 22:31:44 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

#include <iostream> 

int main()
{
	Sorcerer robert("Robert", "the Magnificient");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	return 0;
/*
	Sorcerer merlin(robert);
	Sorcerer peter("Peter", "the Pan");

	robert = peter;
	std::cout << merlin;

	Victim bob("Bob");
	Victim jenny(bob);
	Victim raoult("Raoult");

	bob = raoult;
	std::cout << jenny;
	merlin.polymorph(raoult);
*/
}
