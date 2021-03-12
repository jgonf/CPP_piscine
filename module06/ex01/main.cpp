/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:50:51 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/12 17:43:34 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

void	*serialize(void)
{
	int i;
	std::string s1;
	std::string s2;
	std::stringstream ss;
	char *ret = new char[sizeof(std::string) * 2 + sizeof(int)]();

	i = rand() % 1000;
	for (int j = 0; j < 10; j++)
	{
		s1 += rand() % 90 + 49;
		s2 += rand() % 90 + 49;
	}
	ss << &s1 << i << &s2;
	std::cout << s1 << std::endl;
	strcpy(ret, ss.str().c_str());
	std::cout << ret << std::endl;
	return (ret);
}

data	*deserialize(void *raw)
{
	data *res = new data();
//	char * str = reinterpret_cast<char*> (raw);
	res->s1 = std::string(reinterpret_cast<char *>(raw), sizeof(std::string*) + 1);

	char tmp[8];
	strcpy(tmp, res->s1.c_str());
	std::cout << tmp << std::endl;
//	void *ptr = reinterpret_cast<void *> (tmp);
	std::cout << *tmp << std::endl;
//	std::cout << *(res->s1) << std::endl;
	return res;
}

int main(void)
{
	void *ptr;
	data *data;

	srand(time(NULL));
	ptr = serialize();
	data = deserialize(ptr);
//	delete data;
}
