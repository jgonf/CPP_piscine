/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 21:00:49 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/28 21:03:53 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*p_str = &str;
	std::string	&ref_str = str;

	std::cout << *p_str << std::endl;
	std::cout << ref_str << std::endl;
}
