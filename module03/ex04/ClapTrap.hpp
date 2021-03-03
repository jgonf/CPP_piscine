/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:13:17 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/03 21:44:13 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

class ClapTrap {

	protected:
		unsigned int	_hit;
		unsigned int	_max_hit;
		unsigned int	_energy;
		unsigned int	_max_energy;
		unsigned int	_lvl;
		unsigned int	_melee;
		unsigned int	_ranged;
		unsigned int	_armor;
		std::string	_name;

	public:
		ClapTrap(void);

		ClapTrap(unsigned int hit, unsigned int mhit, unsigned int nrj,
unsigned int mnrj, unsigned int lvl, unsigned int melee, unsigned int ranged,
unsigned int armor, std::string name);

		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const &src);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int	getHit(void);
};

#endif
