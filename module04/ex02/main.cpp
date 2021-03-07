/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:33:49 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 22:30:15 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;


	std::cout << std::endl << "-	My test:	-" << std::endl;
	ISquad* test = new Squad;
	ISpaceMarine* arthur = new TacticalMarine;
	ISpaceMarine* jack = new TacticalMarine;
	ISquad*	copy(test);

	std::cout << "There is " << test->getCount() << " in this squad." << std::endl;
	test->push(arthur);
	test->push(jack);
	std::cout << "There is " << test->getCount() << " in this squad." << std::endl;
	std::cout << "There is " << copy->getCount() << " in this copy." << std::endl;

	ISquad* overload = test;
	std::cout << "There is " << overload->getCount() << " after the assignation." << std::endl;

	delete test;
	return 0;
}
