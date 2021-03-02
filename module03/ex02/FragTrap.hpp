/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:13:17 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/02 09:48:18 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(std::string name);
		FragTrap(void);
		FragTrap(FragTrap const &src);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const &src);

		void	vaulthunter_dot_exe(std::string const &target);
};

#endif
