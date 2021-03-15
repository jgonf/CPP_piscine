/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 09:48:33 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/15 10:06:21 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template < typename T >

void	swap(T &x, T &y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template < typename T >

T const	&min(T const &x, T const &y)
{
	if (x < y)
		return x;
	return y;
}

template < typename T >

T const	&max(T const &x, T const &y)
{
	if (x > y)
		return x;
	return y;
}

#endif
