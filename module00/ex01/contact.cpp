#include <iostream>
#include "contact.hpp"

contact::contact(void) {}
 /*
void	contact::init(std::string f_name, std::string l_name, std::string nickname, std::string login)
{
	this->_f_name = f_name;
	this->_l_name = l_name;
lthis->_nickname = nickname;
	this->_login = login;
}
*/

void	contact::get_info(void)
{
	std::cout << this->_f_name << std::endl;
	std::cout << this->_l_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_login << std::endl;

}

void	contact::init(void)
{
	std::string	var;

	std::cout << "First Name :" ;
	std::cin.ignore();
	std::getline(std::cin, var);
	this->_f_name = var;	
	std::cout << "Last Name :" ;
	std::cin.ignore();
	std::getline(std::cin, var);
	this->_l_name = var;	
	std::cout << "Nickname :" ;
	std::cin.ignore();
	std::getline(std::cin, var);
	this->_nickname = var;
	std::cout << "Login :" ;
	std::cin.ignore();
	std::getline(std::cin, var);
	this->_login = var;
	std::cout << "Postal Address :" ;
	std::cin.ignore();
	std::getline(std::cin, var);
	this->_address = var;
	std::cout << "Email Address :" ;
	std::cin.ignore();
	std::getline(std::cin, var);
	this->_email = var;
	std::cout << "Phone Number :" ;
	std::cin.ignore();
	std::getline(std::cin, var);
	this->_phone = var;
	std::cout << "Birthday Date :" ;
	std::cin.ignore();
	std::getline(std::cin, var);
	this->_birthday = var;
	std::cout << "Favorite Meal :" ;
	std::cin.ignore();
	std::getline(std::cin, var);
	this->_meal = var;
	std::cout << "Underwear Color :" ;
	std::cin.ignore();
	std::getline(std::cin, var);
	this->_underwear = var;
	std::cout << "Darkest Secret :" ;
	std::cin.ignore();
	std::getline(std::cin, var);
	this->_secret = var;

}
