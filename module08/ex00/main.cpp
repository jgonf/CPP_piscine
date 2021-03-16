/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:33:15 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/16 21:29:11 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{

	std::vector <int> v1;

	std::cout << "Vector = {1, 3, 5, 7, 9}" << std::endl;
	for (int i = 1; i <= 10; i += 2)
		v1.push_back(i);
	std::cout << "Element " << easyfind(v1, 3) << " have been found." <<  std::endl;
	std::cout << "Try with element -1" << std::endl;
	try
	{
		easyfind(v1, -1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::list <int> l1;

	std::cout << "List = {2, 2}" << std::endl;
	l1.push_back(2);
	l1.push_back(2);
	std::cout << "Element " << easyfind(l1, 2) << " have been found." <<  std::endl;
	std::cout << "Try with element 0" << std::endl;
	try
	{
		easyfind(l1, 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::deque <int> d1;

	std::cout << "Deque = NULL" << std::endl;
	std::cout << "Try with element 3" << std::endl;
	try
	{
		easyfind(d1, 3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
