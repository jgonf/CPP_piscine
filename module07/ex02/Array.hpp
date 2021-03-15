/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <jgonfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:20:41 by jgonfroy          #+#    #+#             */
/*   Updated: 2021/03/15 21:19:05 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template <typename T>

class Array{

	private:
		T	*_array;
		unsigned int	_size;

	public:
		Array<T>(void): _array(NULL), _size(0) {}

		Array<T>(unsigned int n): _size(n) { _array = new T[n]; }

		Array<T>(Array const &src)
		{
			_size = src.size();
			_array = new T[_size];

			for (unsigned int i = 0; i < _size; i++)
				_array[i] = src[i];
		}

		~Array<T>(void)
		{
			if (_size)
				delete [] _array;
		}

		Array &operator=(Array const &src)
		{
			if (_size)
				delete [] _array;
			_size = src.size();
			_array = new T[_size];
			for (unsigned long i = 0; i < _size; i++)
				_array[i] = src[i];

			return *this;
		}

		unsigned int size(void) const { return _size; }

		T &operator[](unsigned int i) const
		{
			if (i < 0 || i >= _size)
				throw std::out_of_range("the index is out of range");
			return _array[i];
		}
};

#endif
