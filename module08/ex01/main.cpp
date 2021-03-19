/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 17:06:54 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/19 09:36:53 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <stdlib.h>
#include <time.h>

int main()
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	srand(time(NULL));

	std::cout << "Test in the subject :" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl << "Test to add more number :" << std::endl;
	try
	{
		sp.addNumber(11);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Test with an array of 1000 form 0 to 999 :" << std::endl;
	Span big = Span(1000);
	for (int i = 0; i < 1000; i++)
		big.addNumber(i);
	std::cout << "Min : " << big.shortestSpan() << std::endl;
	std::cout << "Max : " << big.longestSpan() << std::endl;

	std::cout << std::endl << "Test with an array of 1000 with random number between 0 et 4999 :" << std::endl;
	Span bigRand = Span(1000);
	for (int i = 0; i < 1000; i++)
		bigRand.addNumber(rand() % 5000);
	std::cout << "Min : " << bigRand.shortestSpan() << std::endl;
	std::cout << "Max : " << bigRand.longestSpan() << std::endl;


	std::cout << std::endl << "Test with a array of 0 ou 1 nombre." << std::endl;
	Span small = Span(3);
	try
	{
		std::cout << "Min : " << small.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	small.addNumber(5);
	try
	{
		std::cout << "Max : " << small.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Test with a array de 2" << std::endl;
	small.addNumber(5);
	try
	{
		std::cout << "Min : " << small.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Max : " << small.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Test : add several number a the same time" << std::endl;

	Span addSeveral = Span(3);
	addSeveral.addNumber(2, 3);
	std::cout << "Min : " << addSeveral.shortestSpan() << std::endl;
	std::cout << "Max : " << addSeveral.longestSpan() << std::endl;
	try
	{
		addSeveral.addNumber(2, 3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl << "Test : add a vector" << std::endl;

	Span addVector = Span(4);
	std::vector<int> vTest;

	vTest.push_back(0);
	vTest.push_back(-5);
	vTest.push_back(15);
	vTest.push_back(3);
	addVector.addNumber(vTest);
	std::cout << "Min : " << addVector.shortestSpan() << std::endl;
	std::cout << "Max : " << addVector.longestSpan() << std::endl;

	Span smallVec = Span(3);
	try
	{
		smallVec.addNumber(vTest);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
