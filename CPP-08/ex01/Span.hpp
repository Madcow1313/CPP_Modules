#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
	std::vector<int> array;
	unsigned int max_size;
	unsigned int current_size;
public:
	Span(unsigned int N);
	~Span();
	void addNumber(int number);

	unsigned int get_maxsize();
	unsigned int get_currentsize();
	long shortestSpan();
	long longestSpan();
	std::vector<int> get_array();

	class if_no_space : public std::exception
	{
		const char *what() const throw();
	};

	class if_low_elem : public std::exception
	{
		const char *what() const throw();
	};
	template <class Iterator>
	void addNumber( Iterator First, Iterator Last)
	{
		if (std::distance(First, Last) <= this->max_size - this->current_size)
		{
			std::copy(First, Last, std::back_inserter(this->array));
			this->current_size += std::distance(First, Last);
		}
		else
		{
			std::copy(First, First + (this->max_size - this->current_size), std::back_inserter(this->array));
			this->current_size = this->max_size;
			std::cout << "Array is full" << std::endl;
		}
	};
	
};



#endif