/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:14:22 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/09 11:01:07 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_invent[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		virtual ~MateriaSource(void);
		MateriaSource	&operator=(MateriaSource const & src);

		void	learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);
};

#endif
