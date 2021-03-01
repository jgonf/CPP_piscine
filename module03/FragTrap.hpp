/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:13:17 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/01 22:37:16 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>

class FragTrap {

	private:
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
		FragTrap(std::string name);
		FragTrap(void);
		FragTrap(FragTrap const &src);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const &src);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
