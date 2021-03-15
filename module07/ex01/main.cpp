/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:17:38 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/15 13:25:44 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Test.hpp"

void	print_square(int n)
{
	std::cout << n*n << std::endl;
}

void	print_strlen(std::string str)
{
	std::cout << "Size of str : " << str.size() << std::endl;
}

void	print_N(Test test)
{
	std::cout << "Value of N : " << test.getN() << std::endl;
}

int main()
{
	int array_n[6] = {0, 1, 2, 3, 4, 5};
	std::string array_str[4] = {"Roger", "Youhou", "Joly Jumper", "Yo ma poule!"};
	Test array_test[2];
	array_test[0] = Test(5);
	array_test[1] = Test(7);

	std::cout << "Affiche le carre des elements du array {0, 1, 2, 3, 4, 5} :" << std::endl;
	iter(array_n, 6, &print_square);

	std::cout << std::endl << "Affiche le taille des elements du array :";
	std::cout << "{\"Roger\", \"Youhou\", \"Joly Jumper\", \"Yo ma poule!\"}" << std::endl;
	iter(array_str, 4, &print_strlen);

	std::cout << std::endl << "Affiche la valeur de N dans la classe Test :" << std::endl;
	iter(array_test, 2, &print_N);
	return 0;
}
