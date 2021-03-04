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

int main()
{
	Sorcerer robert("Robert", "the Magnificient");
	Sorcerer merlin(robert);
	Sorcerer peter("Peter", "the Pan");

	robert = peter;
	std::cout << merlin;
}
