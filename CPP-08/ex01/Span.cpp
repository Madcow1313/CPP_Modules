#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->max_size = N;
	this->current_size = 0;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
	if (this->current_size >= this->max_size)
		throw (if_no_space());
	this->array.push_back(number);
	this->current_size++;
}

const char *Span::if_no_space::what() const throw()
{
	return ("No space left in array");
}

const char *Span::if_low_elem::what() const throw()
{
	return ("Can't get the value, too low on elements in array");
}

unsigned int Span::get_maxsize()
{
	return (this->max_size);
}
unsigned int Span::get_currentsize()
{
	return (this->current_size);
}

std::vector<int> Span::get_array()
{
	return (this->array);
}

long Span::shortestSpan()
{
	if (this->current_size <= 1)
		throw(if_low_elem());
	std::vector<int> sorted = this->array;
	long distance;

	std::sort(sorted.begin(), sorted.end());
	distance = sorted[1] - sorted[0];
	for (unsigned int i = 0; i < this->current_size - 1; i++)
	{
		if (distance > sorted[i + 1] - sorted[i])
			distance = sorted[i + 1] - sorted[i];
	}
	return (distance);
}

long Span::longestSpan()
{
	if (this->current_size <= 1)
		throw (if_low_elem());
	long min = (*min_element(this->array.begin(), this->array.end()));
	long max = (*max_element(this->array.begin(), this->array.end()));

	return (std::abs(max - min));
}
