#ifndef FIXED_HPP
#define FIXED_HPP
#include <iomanip>
#include <iostream>
class Fixed
{
	private:
		int	value;
		static const int f_bits;
	public:
		Fixed();
		~Fixed();
		Fixed & operator=(Fixed const &other);
		Fixed(Fixed const &other);
		int	getRawBits( void ) const;
		void setRawBits( int const Raw );
};

#endif