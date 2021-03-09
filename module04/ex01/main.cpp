/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:14:49 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/09 10:12:43 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "BadGuy.hpp"
#include "ScaryWeapon.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy *b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

/*
	std::cout << std::endl << "	-	Mes test:	-" << std::endl;

	Character* pamela = new Character("Pamela");
	std::cout << *pamela;

	Enemy	*a = new SuperMutant();
	Enemy	*c = new BadGuy();

	pamela->attack(c);

	AWeapon* sw = new ScaryWeapon();
	pamela->equip(sw);
	std::cout << *pamela;
	pamela->attack(c);
	std::cout << *pamela;
	pamela->recoverAP();
	std::cout << *pamela;
	pamela->recoverAP();
	pamela->recoverAP();
	pamela->recoverAP();
	pamela->attack(a);
	std::cout << "SuperMutant still have " << a->getHP() << " hp." << std::endl;

	delete pamela;
	delete me;
	delete  a;
	delete  pr;
	delete  pf;
	delete sw;
*/
	return 0;
}
