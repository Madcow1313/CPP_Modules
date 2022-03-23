#ifndef FIXED_HPP
#define FIXED_HPP
#include <iomanip>
#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int	value;
		static const int f_bits = 8;
	public:
		Fixed();
		Fixed(int const number);
		Fixed(float const number);
		~Fixed();
		Fixed & operator=(Fixed const &other);
		Fixed(Fixed const &other);
		int	getRawBits( void ) const;
		void setRawBits( int const Raw );
	
		float toFloat( void ) const;
		int	toInt( void ) const;
};

std::ostream & operator<<( std::ostream &stream, Fixed const &other);

#endif