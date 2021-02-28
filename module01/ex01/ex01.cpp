/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 22:38:37 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/02/26 22:41:38 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string*	panthere = new std::string("String panthere");
	
	std::cout << *panthere << std::endl;
	delete panthere;
}

int	main()
{
	memoryLeak();
}
