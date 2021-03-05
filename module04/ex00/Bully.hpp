/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bully.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:02:44 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/05 22:30:46 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLY_HPP
#define BULLY_HPP

# include "Victim.hpp"
# include <iostream>

class Bully : public Victim {

	protected:
		Bully(void);

	public:
		Bully(std::string name);
		Bully(Bully const &src);
		~Bully(void);
		Bully	& operator=(Bully const & src);

		virtual void	getPolymorphed(void) const;
};

#endif
