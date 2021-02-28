/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:22:59 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 16:52:32 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>

int main()
{
	srand(time(NULL));
	
	std::cout << "Une horde de zombie arrive !" << std::endl;
	ZombieHorde horde_stack = ZombieHorde(10);
	horde_stack.announce();
	
	std::cout << std::endl << "5 retardataires les rejoignent." << std::endl;
	ZombieHorde *horde_heap = new ZombieHorde(5);
	horde_heap->announce();

	std::cout << std::endl << "Heureusement, les retardaires ne survivront pas longtemps." << std::endl;
	delete horde_heap;
	std::cout << std::endl << "Le reste de la horde non plus" << std::endl;
}
