#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span (void)
	: _maxSize(0) {
	if (Span::verbose)
		std::cout << "Span: Default Constructor" << std::endl;
}

Span::Span (Span const & copy) {
	if (Span::verbose)
		std::cout << "Span: Copy Constructor" << std::endl;
	*this = copy;
}

Span::Span (unsigned int N)
	: _maxSize(N) {
	if (Span::verbose)
		std::cout << "Span: Size Constructor" << std::endl;
}

Span::~Span (void) {
	if (Span::verbose)
		std::cout << "Span: Destructor" << std::endl;
}

Span &	Span::operator= (Span const & rhs) {
	if (Span::verbose)
		std::cout << "Span: Assign Operator" << std::endl;
	_v = rhs._v;
	_maxSize = rhs._maxSize;
	return *this;
}

void	Span::addNumber (int n) {
	if (_v.size() == _maxSize)
		throw SpanFullException();
	_v.push_back(n);
	std::sort(_v.begin(), _v.end());
}
/*
template <typename Iterator>
void	Span::addNumber (Iterator begin, Iterator end) {
	if (_v.size() + std::distance(begin, end) > _maxSize)
		throw SpanFullException();
	_v.insert(begin, end);
	std::sort(_v.begin(), _v.end());
}
*/
int	Span::shortestSpan () {
	if (_v.size() <= 1)
		throw SpanEmptyException();
	int span = *_v.rbegin() - *(++_v.rbegin());
	for (std::vector<int>::reverse_iterator it = _v.rbegin(); it + 1 != _v.rend(); it++)
	{
		span = std::min(span, *it - *(it + 1));
	}
	return (span);
}

int	Span::longestSpan () {
	if (_v.size() <= 1)
		throw SpanEmptyException();
	return (*_v.rbegin() - *_v.begin());
}

bool	Span::verbose = false;
