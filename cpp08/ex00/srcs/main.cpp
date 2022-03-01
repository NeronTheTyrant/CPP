#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int	main (void) {
	{
		std::vector<int>	v;
		std::vector<int>::iterator it;
		for (int i = 0; i < 15; i++)
			v.push_back(i);
		it = easyfind(v, 14);
		if (it == v.end())
			std::cout << "could not find entry in list" << std::endl;
		else
			std::cout << *it << std::endl;
	}
	{
		std::deque<int>	d;
		std::deque<int>::iterator it;
		for (int i = 0; i < 15; i++)
			d.push_back(i);
		it = easyfind(d, 14);
		if (it == d.end())
			std::cout << "could not find entry in list" << std::endl;
		else
			std::cout << *it << std::endl;
	}
	{
		std::list<int>	l;
		std::list<int>::iterator it;
		for (int i = 0; i < 15; i++)
			l.push_back(i);
		it = easyfind(l, 14);
		if (it == l.end())
			std::cout << "could not find entry in list" << std::endl;
		else
			std::cout << *it << std::endl;
	}
	return (0);
}
