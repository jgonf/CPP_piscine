/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:31:58 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/09 11:28:03 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

	Character::Character(void) {}

	Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
		_invent[i] = NULL;
}

	Character::Character(Character const & src): _name(src.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (src._invent[i] != NULL)
			_invent[i] = src._invent[i]->clone();
		else
			_invent[i] = NULL;
	}
}

	Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (_invent[i] != NULL)
			delete _invent[i];
}

Character	&Character::operator=(Character const & src)
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

std::string const &	Character::getName(void) const { return _name; }

void	Character::equip(AMateria* m)
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

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_invent[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		if (_invent[idx] != NULL)
			_invent[idx]->use(target);
}
