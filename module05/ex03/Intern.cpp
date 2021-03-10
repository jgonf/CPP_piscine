/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:30:45 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/10 22:23:41 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


	Intern::Intern(void) {}
	Intern::Intern(Intern const & src) { (void)src; }
	Intern::~Intern(void) {}
	Intern & Intern::operator=(Intern const & src)
{
	(void)src;
	return *this;
}

Form	*Intern::makeShrub(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form	*Intern::makeRobot(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::makePrez(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form	*Intern::makeForm(std::string type, std::string target)
{
	makeConcreteForm functions[3] = { &Intern::makeShrub, &Intern::makeRobot, &Intern::makePrez };
	std::string	types[3] =
	{"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (type == types[i])
		{
			std::cout << "Intern creates " << type << std::endl;
			return (this->*functions[i])(target);
		}
	}

	std::cout << "This kind of form doesn't exist." << std::endl;
	return NULL;
}
