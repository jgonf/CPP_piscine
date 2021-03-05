/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:02:44 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/05 22:31:00 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

# include "Victim.hpp"
# include <iostream>

class Sorcerer {

	private:
		std::string	_name;
		std::string	_title;
		Sorcerer(void);

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &src);
		~Sorcerer(void);
		Sorcerer	& operator=(Sorcerer const & src);

		std::string	get_name(void) const;
		std::string	get_title(void) const;
		void		polymorph(Victim const &victim) const;
};

std::ostream & operator<< (std::ostream & o, Sorcerer const & src);

#endif
