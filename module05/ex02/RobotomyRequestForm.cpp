/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:45:38 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/10 19:49:24 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//forme coplien
	RobotomyRequestForm::RobotomyRequestForm(void): Form("IRobot", 72, 45)
{ 
	std::srand(time(NULL));
}

	RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("IRobot", 72, 45)
{
	std::srand(time(NULL));
	_target = target;
}

	RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form(src)
{
	_target = src.getTarget();
}

	RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	_target = src.getTarget();
	return *this;
}


//getters

std::string	RobotomyRequestForm::getTarget(void) const { return _target; }

//methods

void	RobotomyRequestForm::execAction(void) const
{
	int success;

	success = rand() % 2;
	std::cout << "TATATATATATA" << std::endl;
	if (success)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Oups, it's a failure... " << std::endl;
}
