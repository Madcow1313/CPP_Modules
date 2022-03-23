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


		int operator>(Fixed const &other) const;
		int operator<(Fixed const &other) const;
		int operator>=(Fixed const &other) const;
		int operator<=(Fixed const &other) const;
		int operator!=(Fixed const &other) const;
		int operator==(Fixed const &other) const;

		Fixed operator+(Fixed const &other);
		Fixed operator-(Fixed const &other);
		Fixed operator*(Fixed const &other);
		Fixed operator/(Fixed const &other);

		/*prefix increment*/
		Fixed & operator++();
		Fixed & operator--();
		/*postfix increment*/
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed & min(Fixed &First, Fixed &Second);
		static Fixed & max(Fixed &First, Fixed &Second);

		static const Fixed & min(const Fixed &First, const Fixed &Second);
		static const Fixed & max(Fixed const &First, Fixed const &Second);
};

std::ostream & operator<<( std::ostream &stream, Fixed const &other);

#endif