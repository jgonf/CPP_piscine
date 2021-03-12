/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:50:51 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/12 15:28:54 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

void	*serialize(void)
{
	int *i = new int;
	std::string *s1 = new std::string[10];
	std::string *s2 = new std::string[10];
	std::stringstream ss;
	char *ret = new char[sizeof(std::string) * 2 + sizeof(int)]();

	*i = rand() % 1000;
	for (int j = 0; j < 10; j++)
	{
		s1[j] = rand() % 90 + 49;
		s2[j] = rand() % 90 + 49;
	}
	ss << s1 << i << s2;
	strcpy(ret, ss.str().c_str());
	return (ret);
}

data	*deserialize(void *raw)
{
	data *res = new data();
	char * str = reinterpret_cast<char*> (raw);
	

//	std::string tmp(str);
//	tmp = tmp.substr(0, sizeof(std::string*) + 1);
	std::cout << str << std::endl;
	std::cout << tmp << std::endl;

//	char const *str1 = tmp.c_str();	
//	std::cout << str1 << std::endl;
//	void *ptr = reinterpret_cast<void *>(str1);
//	std::cout << ptr << std::endl;


//	res->s1 = reinterpret_cast<std::string> (str);
//	char test = *reinterpret_cast<char *> (raw);

//	std::cout << res->s1 << std::endl;
//	std::cout << str << std::endl;

	return res;
}

int main(void)
{
	void *ptr;
	//data *data;

	srand(time(NULL));
	ptr = serialize();
	deserialize(ptr);
//	delete data;
}
