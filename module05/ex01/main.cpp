/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 20:04:14 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/10 13:59:52 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void ex00(void)
{
	std::cout << "	- test ex00	-	" << std::endl;
	try
	{
		Bureaucrat bill("Bill", 3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bill("Bill", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bill("Bill", 200);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bill("Bill", 1);
		bill.incGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bill("Bill", 150);
		bill.decGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}

void	ex01(void)
{

	std::cout << "	- test ex01	-	" << std::endl;
	//test1
	try
	{
		Form caf("CAF", 0, 100);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	//test2
	std::cout << std::endl;
	Form caf("CAF", 5, 100);
	Bureaucrat homer("Homer", 6);
	std::cout << caf << homer;
	homer.signForm(caf);

	//test3
	std::cout << std::endl;
	homer.incGrade();
	std::cout << homer;
	homer.signForm(caf);
	std::cout << caf;
}

int main()
{
	ex00();
	std::cout << std::endl;
	ex01();
}
