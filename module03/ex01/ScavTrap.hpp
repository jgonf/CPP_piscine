/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:13:17 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/02 09:13:14 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>

class ScavTrap {

	private:
		unsigned int	_hit = 100;
		unsigned int	_max_hit = 100;
		unsigned int	_energy = 50;
		unsigned int	_max_energy = 50;
		unsigned int	_lvl = 1;
		unsigned int	_melee = 20;
		unsigned int	_ranged = 15;
		unsigned int	_armor = 3;
		std::string	_name;

	public:
		ScavTrap(std::string name);
		ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const &src);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer(std::string const &target);
};

#endif
