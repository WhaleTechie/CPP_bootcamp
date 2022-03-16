/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:37:53 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/28 23:37:53 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_H
# define Span_H

# include <iostream>
# include <string>
# include <sstream>
# include <list>
# include <algorithm>

class Span
{
	private:
		Span();
		unsigned int _n;
		std::list<int> _storage;

	public:

		Span(unsigned int n);
		virtual ~Span();
		Span(const Span & other);
		Span & operator=(Span const & other);

		class StorageOverFlowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Storage overflow Exception");
				}
		};

		class NotEnoughNumbersException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Not enough numbers Exception");
				}
		};

		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addNumber(int value);
		template<typename T>
		void addNumber(T begin, T end) {
			if (this->_storage.size() + std::distance(begin, end) > this->_n)
				throw Span::StorageOverFlowException();
			while (begin != end)
			{
				this->_storage.push_back(*begin);
				++begin;
			}
		};
};

#endif
