/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:04:50 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/19 11:53:25 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"
#include <Test.hpp>

int main()
{
	MutantStack<int>    mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Test subject : " << std::endl;

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl << "Test cpy : " << std::endl;
	MutantStack<int> copy(mstack);
	it = copy.begin();
	ite = copy.end();
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int> assignation = mstack;
	it = assignation.begin();
	ite = assignation.end();
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}


	std::cout << std::endl << "Test string : " << std::endl;
	MutantStack<std::string>    cstack;

	cstack.push("Roger");
	cstack.push("Test");
	cstack.push("Yo!");


	MutantStack<std::string>::iterator cit = cstack.begin();
	MutantStack<std::string>::iterator cite = cstack.end();
	while(cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}

	std::cout << std::endl << "Test class : " << std::endl;
	MutantStack<Test>    class_stack;

	class_stack.push(Test(5));
	class_stack.push(Test(3));
	class_stack.push(Test(2));
	class_stack.push(Test(9));

	std::cout << class_stack.top().getN() << std::endl;

	class_stack.pop();

	MutantStack<Test>::iterator class_it = class_stack.begin();
	MutantStack<Test>::iterator class_ite = class_stack.end();
	while(class_it != class_ite)
	{
		std::cout << class_it->getN() << std::endl;
		++class_it;
	}

	return 0;
}
