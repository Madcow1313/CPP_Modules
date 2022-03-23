#include "Fixed.hpp"

static const int f_bits = 8;

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other) : value(other.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.value;
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member fuction called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits( int const Raw)
{
	this->value = Raw;
}