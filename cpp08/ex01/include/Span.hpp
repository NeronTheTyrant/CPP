#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>

class	Span {
	private:
		Span (void);

		std::vector<int>	_v;
		unsigned int		_maxSize;
	public:
		Span (Span const & copy);
		Span (unsigned int N);
		~Span (void);

		Span & operator=(Span const & rhs);

		void	addNumber(int n);
		template <typename Iterator>
		void	addNumber(Iterator begin, Iterator end) {
			if (_v.size() + std::distance(begin, end) > _maxSize)
				throw SpanFullException();
			_v.insert(_v.begin(), begin, end);
			std::sort(_v.begin(), _v.end());
		};
		int		shortestSpan();
		int		longestSpan();

		class SpanFullException : public std::exception {
			virtual const char *	what (void) const throw() {
				return "Span is Full";};
		};
		class SpanEmptyException : public std::exception {
			virtual const char *	what (void) const throw() {
				return "Span is Empty";};
		};

		static bool verbose;
};

#endif
