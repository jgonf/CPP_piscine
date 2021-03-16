/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:20:24 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/16 21:28:30 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <list>
# include <deque>

template <typename T>

int	easyfind(T & cont, int n)
{
	typename T::iterator it;

	it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		throw std::invalid_argument ("Element not found");

	return *it;
}

#endif
