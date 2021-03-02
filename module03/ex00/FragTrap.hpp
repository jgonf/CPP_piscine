/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:13:17 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/02 09:16:34 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>

class FragTrap {

	private:
		unsigned int	_hit = 100;
		unsigned int	_max_hit = 100;
		unsigned int	_energy = 100;
		unsigned int	_max_energy = 100;
		unsigned int	_lvl = 1;
		unsigned int	_melee = 30;
		unsigned int	_ranged = 20;
		unsigned int	_armor = 5;
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
		void	vaulthunter_dot_exe(std::string const &target);
};

#endif
