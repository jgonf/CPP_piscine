/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:13:32 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/07 22:29:53 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <string>

	Squad::Squad(void):_count(0)
{
	_units = new ISpaceMarine*[1];
}

	Squad::Squad(Squad const & src)
{
	_count = src.getCount();
	_units = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; i++)
		_units[i] = src.getUnit(i)->clone();
}

	Squad::~Squad(void)
{
	for (int i = 0; i < _count; i++)
		delete _units[i];
	delete [] _units;
}

Squad	&Squad::operator=(Squad const & src)
{
	for (int i = 0; i < _count; i++)
		delete _units[i];
	delete [] _units;
	_count = src.getCount();
	_units = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; i++)
		_units[i] = src.getUnit(i)->clone();
	return *this;
}

int	Squad::getCount(void) const { return _count; }

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < 0 || n > _count - 1)
		return NULL;
	return _units[n];
}

int	Squad::push(ISpaceMarine* unit)
{
	_units[_count] = unit;
	_count += 1;
	return _count;
}
