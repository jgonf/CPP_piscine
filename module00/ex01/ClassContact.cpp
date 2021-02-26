#include "phonebook.hpp"

contact::contact(void) {}

void	contact::get_all(void) const
{
	std::cout << this->_f_name << std::endl;
	std::cout << this->_l_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_login << std::endl;
	std::cout << this->_address << std::endl;
	std::cout << this->_email << std::endl;
	std::cout << this->_phone << std::endl;
	std::cout << this->_birthday << std::endl;
	std::cout << this->_meal << std::endl;
	std::cout << this->_underwear << std::endl;
	std::cout << this->_secret << std::endl;
}

void	contact::print_info(std::string str) const
{
	if (str.size() <= 10)
		std::cout << std::setw(10) << str;
	else
		std::cout << str.substr(0, 9) << ".";	
}

void	contact::get_info(int index) const
{
	std::cout << std::setw(10) << index;
	std::cout << "|";
	print_info(this->_f_name);	
	std::cout << "|";
	print_info(this->_l_name);	
	std::cout << "|";
	print_info(this->_login);
	std::cout << std::endl;	
}

void	contact::init(void)
{
	std::string	var;

	std::cout << "First Name :" << std::endl;
	std::getline(std::cin, var);
	this->_f_name = var;
	std::cout << "Last Name :" << std::endl;
	std::getline(std::cin, var);
	this->_l_name = var;
	std::cout << "Nickname :" << std::endl;
	std::getline(std::cin, var);
	this->_nickname = var;
	std::cout << "Login :" << std::endl;
	std::getline(std::cin, var);
	this->_login = var;
	std::cout << "Postal Address :" << std::endl;
	std::getline(std::cin, var);
	this->_address = var;
	std::cout << "Email Address :" << std::endl;
	std::getline(std::cin, var);
	this->_email = var;
	std::cout << "Phone Number :" << std::endl;
	std::getline(std::cin, var);
	this->_phone = var;
	std::cout << "Birthday Date :" << std::endl;
	std::getline(std::cin, var);
	this->_birthday = var;
	std::cout << "Favorite Meal :" << std::endl;
	std::getline(std::cin, var);
	this->_meal = var;
	std::cout << "Underwear Color :" << std::endl;
	std::getline(std::cin, var);
	this->_underwear = var;
	std::cout << "Darkest Secret :" << std::endl;
	std::getline(std::cin, var);
	this->_secret = var;

}
