/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 18:39:38 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/10 19:48:29 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//forme coplien
	PresidentialPardonForm::PresidentialPardonForm(void): Form("Zafod", 25, 5) {}

	PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Zafod", 25, 5)
{
	_target = target;
}

	PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form(src)
{
	_target = src.getTarget();
}

	PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	_target = src.getTarget();
	return *this;
}


//getters

std::string	PresidentialPardonForm::getTarget(void) const { return _target; }

//methods

void	PresidentialPardonForm::execAction(void) const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
