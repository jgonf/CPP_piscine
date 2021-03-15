/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:00:17 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/15 10:28:36 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"
#include "Test.hpp"

int main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;


	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	float e = 4.2f;
	float f = 5.2f;

	std::cout << std::endl;
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;


	Test g(5);
	Test h(7);

	std::cout << std::endl;
	::swap(g, h);
	std::cout << "g = " << g.getN() << ", h = " << h.getN() << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ).getN() << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ).getN() << std::endl;


	return 0;
}
