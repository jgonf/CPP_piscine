/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:18:02 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/17 18:39:36 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

//forme coplien

	Span::Span(unsigned int N): _N(N) {}

	Span::Span(Span const & src) { *this = src; }

Span	&Span::operator=(Span const &src)
{
	_N = src._N;
	_v1 = src._v1;

	return *this;
}

void	Span::addNumber(int nb)
{
	if (_v1.size() == _N)
		throw std::overflow_error("No more space");
	_v1.push_back(nb);
	std::sort(_v1.begin(), _v1.end());
}

unsigned int	Span::shortestSpan(void) 
{
	unsigned int	min_span = UINT_MAX;
	unsigned int	diff;

	if (_v1.size() < 2)
		throw std::overflow_error("Not enough number");
	for (std::vector<int>::iterator it = _v1.begin() + 1; it != _v1.end(); ++it)
	{
		diff = *it - *(it - 1);
		if (diff < min_span)
			min_span = diff;
	}
	return min_span;
}

unsigned int	Span::longestSpan(void)
{
	if (_v1.size() < 2)
		throw std::overflow_error("Not enough number");
	return *(_v1.end() - 1) - *(_v1.begin());
}
