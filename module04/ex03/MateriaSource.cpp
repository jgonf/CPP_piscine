/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:32:05 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/09 11:02:51 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

	MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_invent[i] = NULL;
};

	MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._invent[i] != NULL)
			_invent[i] = src._invent[i]->clone();
		else
			_invent[i] = NULL;
	}
}

	MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (_invent[i] != NULL)
			delete _invent[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const & src)
{
	for (int i = 0; i < 4; i++)
		if (_invent[i] != NULL)
			delete _invent[i];
	for (int i = 0; i < 4; i++)
	{
		if (src._invent[i] != NULL)
			_invent[i] = src._invent[i]->clone();
		else
			_invent[i] = NULL;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_invent[i] == NULL)
		{
			_invent[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{

	for (int i = 0; i < 4; i++)
		if (_invent[i] && _invent[i]->getType() == type)
			return _invent[i]->clone();
	return 0;
}
