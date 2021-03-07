/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BadGuy.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:36:32 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 15:30:37 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BadGuy.hpp"

	BadGuy::BadGuy(void): Enemy(50, "Bad Guy")
{
	std::cout << "I'm a bad guy!" << std::endl;
}

	BadGuy::BadGuy(BadGuy const & src): Enemy(src)
{
	std::cout << "I'm a bad guy!" << std::endl;
}

	BadGuy::~BadGuy(void)
{
	std::cout << "NOOoOOoo..." << std::endl;
}

BadGuy	&BadGuy::operator=(const	BadGuy &src)
{
	(void)src;
	return *this;
}

