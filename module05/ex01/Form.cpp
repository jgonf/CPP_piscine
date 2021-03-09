/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 20:50:35 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/09 22:00:56 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Forme coplien

	Form::Form(void) : _signed(false), _grade_sign(0), _grade_exec(0) {}

	Form::Form(std::string const name, int const sign, int const exec):
_name(name), _signed(false), _grade_sign(sign), _grade_exec(exec)
{
	if (_grade_sign < 1 || _grade_exec < 1)
		throw Form::GradeTooLowException();
	if (_grade_sign > 150 || _grade_exec > 150)
		throw Form::GradeTooHighException();
}

	Form::Form(Form const &src) :
_name(src.getName()), _signed(src.getSigned()), _grade_sign(src.getGradeSign()), _grade_exec(src.getGradeExec()) {}

	Form::~Form(void) {}

	Form&	Form::operator=(Form const &src)
{
	(void)src;
	return *this;
}


//Getters
std::string const	Form::getName(void) const { return _name; }
bool			Form::getSigned(void) const { return _signed; }
int 			Form::getGradeSign(void) const { return _grade_sign; }
int 			Form::getGradeExec(void) const { return _grade_exec; }



void			Form::beSigned(Bureaucrat const & chief)
{
	if (_grade_sign > chief.getGrade())
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

std::ostream &	operator<<(std::ostream & o, Form const & src)
{
	o << "Form " << src.getName() << " must be signed be signed by a grade " << src.getGradeSign();
	o << " and executed by a grade " << src.getGradeExec() << std::endl;
	if (src.getSigned())
		o << "It already have been signed." << std::endl;
	else
		o << "It need to be signed. " << std::endl;
	return o;
}
