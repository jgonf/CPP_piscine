/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:51:08 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/08 14:54:12 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &src);
		virtual ~Cure(void);
		Cure & operator=(Cure const & src);

		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif
