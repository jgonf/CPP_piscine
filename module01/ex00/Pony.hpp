#ifndef PONY_HPP
#define PONY_HPP

class pony {
	private:
		std::string	_name;
		int		_age;
		std::string	_astro;			

	public:
		pony(std::string p_name, int p_age, std::string p_astro);
		~pony(void);
		void get_info(void) const;
};

#endif
