/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 09:48:27 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/01 11:42:45 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

void	replace(std::string filename, std::string s1, std::string s2)
{
	std::string	file;
	std::string	dest_file = filename + ".replace";
	std::ifstream	ifs(filename.c_str());
	std::ofstream	ofs(dest_file.c_str());

	if (!ifs || !ofs)
	{
		std::cout << "ERROR: can't open file" << std::endl;
		return ;
	}
	getline(ifs, file, (char)ifs.eof());

	size_t	start = file.find(s1);
	while (start != std::string::npos)
	{
		file.replace(start, s1.length(), s2);
		start = file.find(s1);
	}

	ifs.close();
	ofs << file;
	ofs.close();
}
