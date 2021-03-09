/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:36:28 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/09 11:49:15 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl << "	-	Mes tests : 	- " << std::endl;
	AMateria* test = new Cure();
	AMateria* cpy(test);
	std::cout << "Test copie : " << test->getType() << " " << cpy->getType() << std::endl;

	AMateria* test2 = new Ice();
	AMateria* assign = test2;
	std::cout << "Test assignation : " << test2->getType() << " " << assign->getType() << std::endl;

	AMateria* surplus = new Ice();
	ICharacter* bobby = new Character("Bobby");
	IMateriaSource* src_mat = new MateriaSource();

	tmp = src_mat->createMateria("cure");
	bobby->equip(tmp);
	bobby->use(0, *bobby);
	std::cout << "Materia cure is not created because it has not been learned yet" << std::endl;

	src_mat->learnMateria(test);
	src_mat->learnMateria(test2);
	src_mat->learnMateria(new Ice());
	src_mat->learnMateria(new Ice());
	src_mat->learnMateria(surplus);

	std::cout << "Surplus don't go in MateriaSource because it's full so we need to delete ourself." << std::endl;
	bobby->use(4, *bobby);
	bobby->use(-1, *bobby);
	bobby->use(3, *bobby);

	tmp = src_mat->createMateria("Blabla");
	bobby->equip(tmp);
	bobby->use(0, *bobby);
	std::cout << "Materia Blabla is not created because it doesn't exist" << std::endl;

	tmp = src_mat->createMateria("cure");
	bobby->equip(tmp);
	bobby->use(0, *bobby);

	delete bobby;
	delete src_mat;
	delete surplus;

	return 0;
}
