/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:02:44 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/09 09:59:16 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

# include "Victim.hpp"
# include <iostream>

class Peon : public Victim {

	protected:
		Peon(void);

	public:
		Peon(std::string name);
		Peon(Peon const &src);
		virtual ~Peon(void);
		Peon	& operator=(Peon const & src);

		virtual void	getPolymorphed(void) const;
};

#endif
