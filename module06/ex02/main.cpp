/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:29:41 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/14 19:27:42 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	int i;

	i = rand() % 3;
	if (i == 0)
	{
		std::cout << "A generated" << std::endl;
		return new A;
	}
	if (i == 1)
	{
		std::cout << "B generated" << std::endl;
		return new B;
	}
	if (i == 2)
	{
		std::cout << "C generated" << std::endl;
		return new C;
	}

	return NULL;
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	try {
		A &testA = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)testA;
	}
	catch (std::exception& e) {}

	try {
		B &testB = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)testB;
	}
	catch (std::exception& e) {}

	try {
		C &testC = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)testC;
	}
	catch (std::exception& e) {}
}

int main()
{
	srand(time(NULL));
	Base *test = generate();
	identify_from_pointer(test);
	identify_from_reference(*test);
	delete test;
}
