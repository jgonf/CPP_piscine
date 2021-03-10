/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:44:42 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/10 19:48:44 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

//forme coplien
	ShrubberyCreationForm::ShrubberyCreationForm(void): Form("Shrub", 145, 137) {}

	ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrub", 145, 137)
{
	_target = target;
}

	ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form(src)
{
	_target = src.getTarget();
}

	ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	_target = src.getTarget();
	return *this;
}


//getters

std::string	ShrubberyCreationForm::getTarget(void) const { return _target; }

//methods

void	ShrubberyCreationForm::execAction(void) const
{
	std::string file_name = _target + "_shrubbery";
	std::ofstream	ofs(file_name.c_str());

	ofs << "         v" << std::endl;
	ofs << "        >X<" << std::endl;
	ofs << "         A" << std::endl;
	ofs << "        d$b" << std::endl;
	ofs << "      .d\\$$b." << std::endl;
	ofs << "    .d$i$$\\$$b." << std::endl;
	ofs << "       d$$@b" << std::endl;
	ofs << "      d\\$$$ib" << std::endl;
	ofs << "    .d$$$\\$$$b" << std::endl;
	ofs << "   .d$$@$$$$\\$$ib." << std::endl;
	ofs << "      d$$i$$b" << std::endl;
	ofs << "     d\\$$$$@$b" << std::endl;
	ofs << "  .d$@$$\\$$$$$@b." << std::endl;
	ofs << ".d$$$$i$$$\\$$$$$$b." << std::endl;
        ofs << "	###" << std::endl;
        ofs << "	###" << std::endl;
        ofs << "	###" << std::endl;

	ofs.close();
}
