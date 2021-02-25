#ifndef CONTACT_HPP
# define CONTACT_HPP

class contact {
	private:
		std::string	_f_name;
		std::string	_l_name;
		std::string	_nickname;
		std::string	_login;
		std::string	_address;
		std::string	_email;
		std::string	_phone;
		std::string	_birthday;
		std::string	_meal;
		std::string	_underwear;
		std::string	_secret;

		void print_info(std::string str) const;

	public:
		contact(void);
		void get_info(int index) const;
		void init(void);
		
};
#endif
