/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:29:56 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/12 10:45:51 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "conversion.hpp"

int	special_value(char *arg)
{
	std::string s(arg);
	if (s == "nanf" || s == "-inff" || s == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << s << std::endl;
		std::cout << "double: " << s.substr(0, s.length() - 1) << std::endl;
		return 1;
	}
	if (s == "nan" || s == "-inf" || s == "+inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << s << "f" << std::endl;
		std::cout << "double: " << s  << std::endl;
		return 1;
	}
	return 0;
}

void	display_char(char* arg)
{
	char c;

	c = arg[0];
	std::cout << "char: '" << c << "'" << std::endl;
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
		std::cout << "char: '" << static_cast<char> (i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	if (i < 1000000)
	{
		std::cout << "float: " << static_cast<float> (i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double> (i) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float> (i) << "f" << std::endl;
		std::cout << "double: " << static_cast<double> (i) << std::endl;
	}
}

void	display_float(char* arg)
{
	float	f;
	int	i;

	if (special_value(arg))
		return ;
	f = static_cast<float> (atof(arg));
	i = static_cast<int> (f);
	if (f < 33.0 || f > 126.0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char> (f) << "'" << std::endl;
	if (f > INT_MAX || f < INT_MIN || (f < 0 && i > 0) || (f > 0 && i < 0))
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if (f == i && f < 1000000)
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
	double	d;

	if (special_value(arg))
		return ;
	d = atof(arg);
	if (d < 33.0 || d > 126.0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char> (d) << "'" << std::endl;
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int> (d) << std::endl;
	if (d == static_cast<int> (d) && d < 1000000)
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
