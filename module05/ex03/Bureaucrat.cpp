/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:04:14 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/10 20:49:12 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


//Form coplien

	Bureaucrat::Bureaucrat(void) {}

	Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

	Bureaucrat::Bureaucrat(Bureaucrat const &src): _name (src.getName()), _grade (src.getGrade()) {}

	Bureaucrat::~Bureaucrat(void) {};

	Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & src)
{
	(void) src;
	return *this;
}

//Getters
std::string const	Bureaucrat::getName(void) const {return _name; }
int			Bureaucrat::getGrade(void) const {return _grade; }


//Methods
void	Bureaucrat::incGrade(void)
{
	_grade -= 1;
	if (_grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decGrade(void)
{
	_grade += 1;
	if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "The form has not been executed because " << e.what() << std::endl;
	}
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return o;
}
