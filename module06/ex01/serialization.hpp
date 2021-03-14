/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:02:31 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/14 11:56:59 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

# include <iostream>
# include <string>
# include <string.h>
# include <sstream>
# include <stdio.h>
# include <stdlib.h>

struct	data
{
	int		i;
//	std::string	s1;
//	std::string	s2;
	char *s1;
	char *s2;
};

#endif
