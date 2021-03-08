/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:27:16 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/08 17:22:48 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>

class Character : public ICharacter
{
	private:
		std::string const	_name;
		AMateria*		_invent[4];

		Character(void);

	public:
		Character(std::string name);
		Character(Character const & src);
		~Character(void);
		Character &operator=(Character const & src);

		virtual std::string const & getName(void) const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
