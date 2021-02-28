/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 22:34:34 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 22:37:46 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

int main()
{
	Weapon	club = Weapon("crude spiked clud");

	std::cout << club.getType() << std::endl;
	club.setType("some other type of club");
	std::cout << club.getType() << std::endl;
}
