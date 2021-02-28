/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 21:42:16 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 22:00:56 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CPP
#define HUMAN_CPP

#include "Brain.hpp"

class Human {
	private:
		Brain const _brain;
	public:
		Brain const &getBrain(void) const;
		std::string identify(void) const;
		Human(void);
};

#endif
