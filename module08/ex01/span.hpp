/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 21:33:43 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/17 18:01:42 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <climits>

class Span {
	private:
		unsigned int		_N;
		std::vector<int>	_v1;

		Span(void) {};
	public:
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void) {};
		Span &operator=(Span const &src);

		void		addNumber(int nb);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
};

#endif
