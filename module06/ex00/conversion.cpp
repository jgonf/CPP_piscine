/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:30:07 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/11 21:52:29 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int	check_num(std::string s)
{
	int point = 0;
	int f = 0;

	if (!isdigit(s[0]) && s[0] != '-' && s[0] != '+')
	{
		return -1;
	}
	if (s[s.length() - 1] == 'f')
	{
		f = 1;
		s = s.substr(0, s.length() - 1);
	}
	for (int i = 1 ; i < (int)s.length() ; i++)
	{
		if (!isdigit(s[i]))
		{
			if (s[i] != '.' || point)
				return -1;
			point++;
		}
	}
	if ((!point && f) || s[s.length() - 1] == '.')
		return -1;
	if (!point)
		return 1;
	if (f)
		return 2;
	return 3;
}

int	get_type(char *arg)
{
	int	type;
	std::string s(arg);

	if (s == "-inff" || s == "+inff" || s == "nanf")
		return 2;
	if (s == "-inf" || s == "+inf" || s == "nan")
		return 3;
	if (s.length() == 1 && !isdigit(s[0]))
		return 0;
	type = check_num(s);
	if (type != -1)
		return type;
	return -1;
}

int main (int ac, char **ag)
{
	int	type;
	display_arg (*display[4]) = { display_char, display_int, display_float, display_double };

	if (ac != 2)
	{
		std::cout << "USAGE : convert arg1" << std::endl;
		return 1;
	}
	type = get_type(ag[1]);
	if (type == -1)
	{
		std::cout << "The argument must a char, an int, a float or a double" << std::endl;
		return 1;
	}
	display[type](ag[1]);
}
