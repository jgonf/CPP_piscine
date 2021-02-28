/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 10:23:44 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 16:20:19 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde {
	private:
		int _N;
		Zombie *_horde;
		std::string _rand_name(void) const;
		std::string _rand_type(void) const;

	public:
		ZombieHorde(int p_N);
		~ZombieHorde(void);
		void announce(void) const;
};

#endif
