/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:45:38 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/10 22:39:50 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <stdlib.h> 

class RobotomyRequestForm: public Form
{
	private:
		std::string	_target;

		RobotomyRequestForm(void);

	public:
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const & form);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm &operator=(RobotomyRequestForm const & src);

		std::string	getTarget(void) const;
		virtual void	execAction(void) const;
};

#endif
