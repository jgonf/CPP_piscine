/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 21:45:40 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 22:45:56 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

	Human::Human(void)
{}

Brain const	&Human::getBrain(void) const
{
	return (_brain);
}

std::string	Human::identify(void) const
{
	return (_brain.identify());
}
