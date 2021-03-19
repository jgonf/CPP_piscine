/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:50:28 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/19 11:34:54 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {};
		MutantStack(const MutantStack & src) : std::stack<T>() { *this = src; };
		~MutantStack(void) {};
		MutantStack	&operator=(const MutantStack & src)
		{
			this->c = src.c;
			return *this;
		};

		typedef typename std::deque<T>::iterator iterator;

		iterator	begin(void) { return this->c.begin(); };
		iterator	end(void) { return this->c.end(); };
};

#endif
