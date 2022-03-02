#ifndef P_H_O_N_E_B_O_O_K_H_P_P
# define P_H_O_N_E_B_O_O_K_H_P_P

# include <iostream>
# include <iomanip>
# include <cstdlib>

class	contact
{	
	public:
		contact();

		int			get_index();
		std::string get_fname();
		std::string	get_lastname();
		std::string	get_nickname();
		int			get_phone_number();
		std::string	get_ds();

		int			set_index(int out_index);
		std::string set_first_name(std::string out_string);
		std::string	set_last_name(std::string out_string);
		std::string	set_nickname(std::string out_string);
		int			set_phone_number(int number);
		std::string	set_ds(std::string out_string);

	private:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			phone_number;
		std::string	darkest_secret;
};

class phone_book
{	
	public:
		phone_book();

		void	add();
		void	search();
		int		get_count();
		int		set_count(int number);
		int		iterate_counter();
		int		set_max_size(int number);
		int		get_max_size();
		int		iterate_size();
		void	print_fields(int index);
	private:
		contact	human[8];
		int		member_count;
		int		max_size;
};

#endif