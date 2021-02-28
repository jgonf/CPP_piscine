/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:43:30 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 09:58:45 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <iostream>

class	ZombieEvent{
	private:
		std::string	_type;
	
	public:
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		void	randomChump(void);
};

#endif
