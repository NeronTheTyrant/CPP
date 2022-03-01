#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator	easyfind (T & cont, int num) {
	return (std::find(cont.begin(), cont.end(), num));
}

#endif
