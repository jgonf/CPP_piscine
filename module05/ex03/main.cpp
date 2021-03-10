/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 20:04:14 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/10 22:39:24 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Bureaucrat jack("Jack", 1);

	Form* test;
	test = someRandomIntern.makeForm("shrubbery creation", "anywhere");
	std::cout << *test << std::endl;

	std::cout << std::endl;
	Form* test2;
	test2 = someRandomIntern.makeForm("robotomy request", "you");
	jack.signForm(*test2);
	jack.executeForm(*test2);

	std::cout << std::endl;
	Form* test3;
	test3 = someRandomIntern.makeForm("presidential pardon", "the kid next door");
	std::cout << *test3 << std::endl;

	std::cout << std::endl;
	Form* test4;
	test4 = someRandomIntern.makeForm("my honorable amendement", "me, myself and I");

	delete test;
	delete test2;
	delete test3;

	return 0;
}
