/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:43:15 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 10:15:16 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>

int main(void)
{
	Zombie 		new_zomb;
	ZombieEvent	zomb_event;

	srand (time(NULL));

	/////Creation d´un zombie avec la classe Zombie/////
	new_zomb.set_name("Ellie");
	new_zomb.set_type("Clicker");
	new_zomb.announce();
	
	/////Creation d´un zombie avec la classe ZombieEvent et la fonction newZombie/////
	zomb_event.setZombieType("Runner");
	Zombie *baby_zomb = zomb_event.newZombie("Joel");
	baby_zomb->announce();
	delete baby_zomb; //on libere la memoire allouee quand on a plus besoin du Zombie;
	
	/////Creation d´un zombie avec la fonction randomChump/////
	zomb_event.setZombieType("Stalker");
	zomb_event.randomChump();
	zomb_event.randomChump();
}
