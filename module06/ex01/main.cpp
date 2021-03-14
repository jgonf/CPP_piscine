/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:50:51 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/14 20:33:53 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

void	*serialize(void)
{
	int	i;
	std::string random = "ABCDEFGHIJKLMONPQRSTUVWXYZ";
	char 	*ret = new char[sizeof(char *) * 2 + sizeof(int)];

	i = rand() % 1000;
	char s1[8];
	char s2[8];
	for (unsigned long j = 0; j < 8; j++)
	{
		s1[j] = random[rand() % 27];
		s2[j] = random[rand() % 27];
	}
	s1[7] = 0;
	s2[7] = 0;

	memcpy(ret, &s1, sizeof(char *));
	memcpy(ret + sizeof(char *), &i, sizeof(int));
	memcpy(ret + sizeof(char *) + sizeof(int), &s2, sizeof(char *));

	std::cout << "string and integer generated :" << std::endl;
	std::cout << s1 << std::endl;
	std::cout << i << std::endl;
	std::cout << s2 << std::endl;
	return static_cast<void*>(ret);
}

data	*deserialize(void *raw)
{
	data *res = new data();

	int *ptr;
	res->s1 = reinterpret_cast<char *>(raw);
	ptr = reinterpret_cast<int *>(raw) + sizeof(char *)/sizeof(int);
	res->i = *ptr;
	res->s2 = reinterpret_cast<char *>(raw) + sizeof(char *) + sizeof(int);
	return res;
}

int main(void)
{
	void *ptr;
	data *data;

	srand(time(NULL));
	ptr = serialize();
	data = deserialize(ptr);

	std::cout << std::endl;
	std::cout << "output :" << std::endl;
	std::cout << data->s1 << std::endl;
	std::cout << data->i << std::endl;
	std::cout << data->s2 << std::endl;
	delete data;
}
