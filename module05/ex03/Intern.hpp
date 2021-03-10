/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 21:25:50 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/10 22:13:18 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

# include "Form.hpp"
# include <iostream>

class Form;

class Intern
{
	private:
		Form	*makeShrub(std::string target);
		Form	*makeRobot(std::string target);
		Form	*makePrez(std::string target);

	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);
		Intern & operator=(Intern const & src);

		Form*	makeForm(std::string type, std::string target);
};

typedef Form* (Intern::*makeConcreteForm) (std::string target);

#endif
