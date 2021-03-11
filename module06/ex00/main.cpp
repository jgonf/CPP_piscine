#include <iostream>
#include <stdlib.h>

typedef int (display_arg)(char* arg);

//int	display_char(std::string arg);
//int	display_int(std::string arg);
//int	display_float(std::string arg);
//int	display_double(std::string arg);




int	display_char(char* arg)
{
	char c;

	c = (char)arg[0];
	return 1;
}

int	display_int(char* arg)
{
	int i;
	(void)arg;

	i = atoi(arg);
//	c = static_cast <int *> (arg);
	return 1;
}

int	display_float(char* arg)
{
	float *c;

	c = static_cast <float *> (arg);
	return 1;
}

int	display_double(char* arg)
{
	double *c;

	c = static_cast <double>  (arg);
	return 1;
}

int main (int ac, char **ag)
{
	display_arg display[4] = { display_char, display_int, display_float, display_double };

	char * arg = ag[1];

	if (ac != 2)
	{
		std::cout << "USAGE : convert arg1" << std::endl;
		return 0;
	}
	if (arg[0] == 'a')
		return display[0](arg);
	if (arg == "42")
		return display[1](arg);
	if (arg == "42.0f")
		return display[2](arg);
	if (arg == "42.0")
		return display[3](arg);

}

/*
int	is_special_word(std::string arg)
{
	if (arg == "-inff" || arg == "+inff" || arg == "nanf")
		return 1;

}

void	convert_string(std::string arg)
{
	char res_char;
	int res_int;
	float = res_float;
	double = res_double;

	int special_word = is_special_word(arg);

	if (special_word == 1)
		res_		
		
	//	int size = src.length();

	//if premier char est un int :
	//	if pas de . + only int => int
	//	if . + only int => double
	//	if . + f a la fin => float
	//	sinon rien du tout => erreur
	//else si taille 1 (et displayble ?) => char
	//else => rien du tout => erreur
}
*/


