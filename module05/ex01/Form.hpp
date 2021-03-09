/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 20:32:30 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/09 21:48:38 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool			_signed;
		int const		_grade_sign;
		int const		_grade_exec;

		Form(void);

	public:
		Form(std::string const name, int const sign, int const exec);
		Form(Form const &src);
		~Form(void);
		Form	&operator=(Form const &src);

		std::string const	getName(void) const;
		bool			getSigned(void) const;
		int 			getGradeSign(void) const;
		int			getGradeExec(void) const;
		void			beSigned(Bureaucrat const &chief);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Grade too low");
				}
		};
};

std::ostream	& operator<<(std::ostream & o, Form const &src);

#endif
