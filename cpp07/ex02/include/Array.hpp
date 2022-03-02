/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:52:04 by mlebard           #+#    #+#             */
/*   Updated: 2022/03/02 18:08:03 by mlebard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class	Array {
	private:
		T *	_array;
		size_t	_size;

	public:
		static bool verbose;

		Array (void) : _array(new T[0]), _size(0)
		{
			if (Array::verbose)
				std::cout << "Array: Default Constructor" << std::endl;
		};

		Array (Array const & copy) : _array(new T[copy._size]), _size(copy._size)
		{
			if (Array::verbose)
				std::cout << "Array: Copy Constructor" << std::endl;
			for (size_t i = 0; i < _size; i++)
				_array[i] = copy._array[i];
		};

		Array (size_t n) : _array(new T[n]), _size(n)
		{
			if (Array::verbose)
				std::cout << "Array: Size Constructor" << std::endl;
		};

		~Array (void)
		{
			if (Array::verbose)
				std::cout << "Array: Destructor" << std::endl;
			delete [] _array;
		};

		Array & operator= (Array const & rhs)
		{
			if (this == &rhs)
				return *this;
			delete [] _array;
			_size = rhs._size;
			_array = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
			return *this;
		};

		T &	operator[] (size_t i)
		{
			if (i > _size - 1)
				throw OutOfBoundsException();
			return _array[i];
		};

		class OutOfBoundsException : public std::exception {
			virtual const char *	what (void) const throw()
			{return "Array access is out of bounds";};
		};

		size_t	size (void) const {
			return this->_size;
		}
};

template <typename T>
bool Array<T>::verbose = false;

#endif
