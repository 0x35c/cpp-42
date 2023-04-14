#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span(void){
	_size = 0;
	_pos = 0;
}

Span::Span(unsigned int N){
	_size = N + 1;
	_pos = 0;
}

Span::Span(const Span& other){
	for (unsigned int i = 0; i < other._size; i++) {
		_vector.push_back(other._vector[i]);	
	}
}

Span&	Span::operator= (const Span& other){
	for (unsigned int i = 0; i < other._size; i++) {
		_vector.push_back(other._vector[i]);	
	}
	return (*this);
}

int	Span::longestSpan(void){
	unsigned int i;
	unsigned int j;
	int span;

	span = 0;
	i = 0;
	while (i < _pos - 1)
	{
		j = i + 1;
		while (j < _pos)
		{
			if (abs(_vector[j] - _vector[i]) > span)
				span = abs(_vector[j] - _vector[i]);
			j++;
		}
		i++;
	}
	return (span);
}

int	Span::shortestSpan(void){
	unsigned int i;
	unsigned int j;
	int span;

	span = -1;
	i = 0;
	while (i < _pos - 1)
	{
		j = i + 1;
		while (j < _pos)
		{
			if (abs(_vector[j] - _vector[i]) < span || span == -1)
				span = abs(_vector[j] - _vector[i]);
			j++;
		}
		i++;
	}
	return (span);
}

std::vector<int>& Span::getVector(void){
	return (_vector);
}

void	Span::addNumber(int nb)
{
	if (_pos + 1 >= _size)
		throw std::out_of_range("No more space to add a number");
	_vector.push_back(nb);
	_pos++;
}

void Span::addMultipleNumber(const std::vector<int>& vector)
{
	if (_pos + vector.size() >= _size)
		throw std::out_of_range("No more space to add a number");
	_vector.insert(_vector.end(), vector.begin(), vector.end());
	_pos += vector.size();
}

Span::~Span(void){
}
