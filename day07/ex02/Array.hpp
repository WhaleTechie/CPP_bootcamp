/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:45:23 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/24 21:45:23 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdlib.h>

template <class T>
class	Array
{
	private:
		T* _array;
		unsigned int _n;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &other);
		~Array();
		Array &operator=(Array const &other);
		T &operator[](unsigned int i);
		T operator[](unsigned int i) const;
		unsigned int	size() const;
		class OutOfArray: public std::exception
		{
			public:
				const char *what() const throw();
		};
};

template <typename T>
Array<T>::Array(){
	_array = new T[0];
	_n = 0;
}

template <typename T>
Array<T>::Array(unsigned int n){
	_n = n;
	_array = new T[_n];
}

template <typename T>
Array<T>::Array(Array const &other){
	this->_n = other.size();
	this->_array = new T[other.size()];
	
	for (unsigned int i = 0; i < this->_n; i++){
		this->_array[i] = other._array[i];
	}
}

template <typename T>
Array<T>::~Array() {
	if (_array)
		delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other){
	if (this->_n > 0)
		delete[] this->_array;
	this->_array = NULL;
	if (other.Size > 0)
	{
		this->_array = new T[other._n]();
		for(unsigned int i = 0; i < _n; i++)
		{
			this->_array[i] = other._array[i];
		}
		this->_n = other._n;
		return (*this);
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i){
	if (i >= _n || i < 0)
		throw OutOfArray();
	return _array[i];
}

template <typename T>
T Array<T>::operator[](unsigned int i) const{
	if (i >= _n)
		throw OutOfArray();
	return _array[i];
}

template <typename T>
unsigned int Array<T>::size(void) const{
	return _n;
}

template <typename T>
const char *Array<T>::OutOfArray::what() const throw(){
	return "Out Of Array";
}

#endif