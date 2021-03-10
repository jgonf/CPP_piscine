/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 20:04:14 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/10 20:46:20 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm shrub("my flatmate");
	RobotomyRequestForm rob("the tutor's calendar");
	PresidentialPardonForm	prez("my f****** cat");

	std::cout << "	The forms :" << std::endl;
	std::cout << shrub << rob << prez;
	std::cout << std::endl;

	Bureaucrat jack("Jack", 1);
	Bureaucrat bob("Bob", 150);
	Bureaucrat jozie("Jozie", 45);

	std::cout << "	The bureaucrats : " << std::endl;
	std::cout << jack << bob << jozie << std::endl;
	std::cout << std::endl;

	jack.executeForm(shrub);
	jack.signForm(shrub);
	bob.executeForm(shrub);
	jozie.executeForm(shrub);
	jack.signForm(rob);
	jack.signForm(prez);

	std::cout << std::endl;
	jozie.executeForm(rob);

	std::cout << std::endl;
	jack.executeForm(prez);
	return 0;
}
