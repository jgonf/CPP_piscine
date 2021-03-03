/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:24:36 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/03 22:25:24 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
	private:
		int	ninja_attack(void);

	protected:
		unsigned int	set_energy(void);
		unsigned int	set_max_energy(void);
		unsigned int	set_melee(void);
	public :
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &src);
		virtual ~NinjaTrap(void);
		NinjaTrap & operator=(NinjaTrap const &src);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	ninjaShoebox(ClapTrap const & target);
		void	ninjaShoebox(FragTrap const & target);
		void	ninjaShoebox(ScavTrap const & target);
		void	ninjaShoebox(NinjaTrap const & target);

		void	set_name(std::string name);
};

#endif
