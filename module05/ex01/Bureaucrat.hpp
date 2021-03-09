/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:40:51 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/09 22:13:30 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>

class Form;

class Bureaucrat {

	private:
		std::string const	_name;
		int			_grade;

		Bureaucrat(void);

	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);
		Bureaucrat	& operator=(Bureaucrat const & src);

		std::string const	getName(void) const;
		int			getGrade(void) const;
		void			incGrade(void);
		void			decGrade(void);
		void			signForm(Form &form) const;

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

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);
#endif
