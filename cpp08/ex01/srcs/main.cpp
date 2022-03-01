#include <iostream>
#include "Span.hpp"
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <list>

int	main (void) {
	Span	span(42);
	for (int i = 0; i < 42; i++)
		span.addNumber(i);
	try { span.addNumber(42);}
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;

	srand(time(NULL));
	Span	span2(5);
	for (int i = 0; i < 5; i++)
	{
		int randnum = rand() % 1000;
		std::cout << randnum << std::endl;
		span2.addNumber(randnum);
	}
	std::cout << span2.longestSpan() << std::endl;
	std::cout << span2.shortestSpan() << std::endl;

	Span	span3(15);
	std::list<int>	lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	try { span3.shortestSpan();}
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	try { span3.longestSpan();}
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	span3.addNumber(lst.begin(), lst.end());
	std::cout << span3.longestSpan() << std::endl;
	std::cout << span3.shortestSpan() << std::endl;

	return (0);
}
