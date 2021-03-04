/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:02:44 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/04 22:30:51 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <iostream>

class Sorcerer {

	protected:
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
};

std::ostream & operator<<(std::string & o, Sorcerer const & src);

#endif
