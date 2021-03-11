/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:29:56 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/11 22:23:35 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "conversion.hpp"

void	display_char(char* arg)
{
	char c;

	c = arg[0];
	std::cout << "char: " << c <<  std::endl;
	std::cout << "int: " << static_cast<int> (c) <<  std::endl;
	std::cout << "float: " << static_cast<float> (c) << ".0f" <<  std::endl;
	std::cout << "double: " << static_cast<double> (c) << ".0" << std::endl;
}

void	display_int(char* arg)
{
	int i;

	i = atoi(arg);
	if (i < 33 || i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char> (i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float> (i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double> (i) << ".0" << std::endl;
}

void	display_float(char* arg)
{
	float f;

	f = static_cast<float> (atof(arg));
	if (f < 33.0 || f > 126.0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char> (f) << std::endl;
	std::cout << "int: " << static_cast<int> (f) << std::endl;
	if (f == static_cast<int> (f))
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double> (f) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double> (f) << std::endl;
	}
}

void	display_double(char* arg)
{
	double d;

	d = atof(arg);
	if (d < 33.0 || d > 126.0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char> (d) << std::endl;
	std::cout << "int: " << static_cast<int> (d) << std::endl;
	if (d == static_cast<int> (d))
	{
		std::cout << "float: " << static_cast<float> (d) << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float> (d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}
