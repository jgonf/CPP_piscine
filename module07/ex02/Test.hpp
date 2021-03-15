/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:24:12 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/15 10:26:24 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP

class Test {
	public:
		Test(void) {}
		Test(int n) : _n(n){}
		Test(Test const &src) {*this = src;}
		~Test(void) {}

		Test	&operator=(Test const &src) {if (this != &src) this->_n = src._n; return (*this);}

		bool	operator>(Test const &src) const { return this->_n > src._n; }
		bool	operator<(Test const &src) const { return this->_n < src._n; }
		int	getN(void) const {return (_n);}

	private:
		int _n;

};
#endif
