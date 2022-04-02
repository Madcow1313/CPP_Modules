#ifndef P_H_O_N_E_B_O_O_K_H_P_P
# define P_H_O_N_E_B_O_O_K_H_P_P

# include <iostream>
# include <iomanip>
# include <cstdlib>

class	Contact
{	
	public:
		Contact();

		int			get_index();
		std::string get_fname();
		std::string	get_lastname();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_ds();

		void	set_index(int out_index);
		void 	set_first_name(std::string out_string);
		void	set_last_name(std::string out_string);
		void	set_nickname(std::string out_string);
		void	set_phone_number(std::string number);
		void	set_ds(std::string out_string);

	private:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

class Phone_book
{	
	public:
		Phone_book();

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
		Contact	human[8];
		int		member_count;
		int		max_size;
};

#endif