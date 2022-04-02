#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const number)
{
	setRawBits(number << this->f_bits);
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const number )
{
	setRawBits((int)roundf(number * (1 << this->f_bits)));
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other) : value(other.value)
{
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->value = other.value;
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	return (this->value);
}

void	Fixed::setRawBits( int const Raw )
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

int	Fixed::operator>(Fixed const &other) const
{
	if (this->getRawBits() > other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator>=(Fixed const &other) const
{
	if (this->getRawBits() >= other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator<(Fixed const &other) const
{
	if (this->getRawBits() < other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator<=(Fixed const &other) const
{
	if (this->getRawBits() <= other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator!=(Fixed const &other) const
{
	if (this->getRawBits() != other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator==(Fixed const &other) const
{
	if (this->getRawBits() == other.getRawBits())
		return (1);
	return (0);
}

Fixed Fixed::operator+(Fixed const &other)
{
	Fixed Sum(this->toFloat() + other.toFloat());
	return (Sum);
}

Fixed Fixed::operator-(Fixed const &other)
{
	Fixed Dif(this->toFloat() - other.toFloat());
	return (Dif);
}

Fixed Fixed::operator*(Fixed const &other)
{
	Fixed Mult(this->toFloat() * other.toFloat());
	return (Mult);
}

Fixed Fixed::operator/(Fixed const &other)
{
	Fixed Div(this->toFloat() / other.toFloat());
	return (Div);
}

Fixed& Fixed::operator++()
{
	this->value += 1;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->value -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed Old;

	Old = *this;
	this->operator++();
	return (Old);
}

Fixed Fixed::operator--(int)
{
	Fixed Old;

	Old = *this;
	this->operator--();
	return (Old);
}

const Fixed & Fixed::min(const Fixed &First, const Fixed &Second)
{
	if (First > Second)
		return (Second);
	return (First);
}

const Fixed & Fixed::max(const Fixed &First, const Fixed &Second)
{
	if (First > Second)
		return (First);
	return (Second);
}

Fixed & Fixed::min(Fixed &First, Fixed &Second)
{
	if (First > Second)
		return (Second);
	return (First);
}

Fixed & Fixed::max(Fixed &First, Fixed &Second)
{
	if (First > Second)
		return (First);
	return (Second);
}

