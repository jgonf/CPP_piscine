/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:50:51 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/14 12:14:54 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

void	*serialize(void)
{
	int	i;
	char 	*ret = new char[sizeof(char *) * 2 + sizeof(int)];

	i = rand() % 1000;
	for (unsigned long j = 0; j < sizeof(char *) - 1; j++)
	{
		ret[j] = rand() % 90 + 49;
		ret[j + sizeof(char *) + sizeof(int)] = rand() % 90 + 49;
	}
	ret[sizeof(char *)] = 0;
	memcpy(ret + sizeof(char *), &i, sizeof(int));
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
	std::cout << data->s1 << std::endl;
	std::cout << data->i << std::endl;
	std::cout << data->s2 << std::endl;
	delete data;
}
