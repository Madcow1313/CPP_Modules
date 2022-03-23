#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const number)
{
	setRawBits(number << this->f_bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const number )
{
	setRawBits((int)roundf(number * (1 << this->f_bits)));
	std::cout << "Float constructor called" << std::endl;
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
	return (this->value);
}

void	Fixed::setRawBits( int const Raw)
{
	this->value = Raw;
}

int	Fixed::toInt() const
{
	return(this->getRawBits() >> f_bits);
}

float Fixed::toFloat() const
{
	float f;

	f = (float)this->getRawBits() / (1 << this->f_bits);
	return (f);
}

std::ostream & operator<<( std::ostream &stream, Fixed const &other)
{
	stream << other.toFloat();
	return (stream);
}