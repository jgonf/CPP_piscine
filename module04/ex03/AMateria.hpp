/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:01:02 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/08 17:17:58 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	private:
		AMateria(void);

	protected:
		std::string const	_type;
		unsigned int		_xp;

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria(void);
		AMateria & operator=(AMateria const & src);

		std::string const & getType(void) const;
		unsigned int getXP(void) const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
