/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:02:44 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/04 22:30:51 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <iostream>

class Victim {

	protected:
		std::string	_name;
		Victim(void);

	public:
		Victim(std::string name);
		Victim(Victim const &src);
		~Victim(void);
		Victim	& operator=(Victim const & src);

		std::string	get_name(void) const;
		void		getPolymorphed(void) const;
};

std::ostream & operator<< (std::ostream & o, Victim const & src);

#endif
