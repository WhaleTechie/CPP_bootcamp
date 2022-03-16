/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:38:30 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/28 23:38:30 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span (unsigned int n) : _n(n) {}

Span::~Span(){
	this->_storage.clear();
}

Span::Span(const Span & other){
	*this = other;
	return;
}

Span & Span::operator=(Span const & other){
	if (this != &other){
		this->_storage.clear();
		this->_n = other._n;
		this->_storage.assign(other._storage.begin(), other._storage.end());
	}
	return *this;
}

void Span::addNumber(int value){
	if (this->_storage.size() == this->_n)
		throw Span::StorageOverFlowException();
	this->_storage.push_back(value);
}

unsigned int Span::longestSpan(){
	if (this->_storage.size() <= 1)
		throw Span::NotEnoughNumbersException();

	return std::abs(*std::max_element(this->_storage.begin(), this->_storage.end()) -
		*std::min_element(this->_storage.begin(), this->_storage.end()));
}

unsigned int Span::shortestSpan(){
	if (this->_storage.size() <= 1)
		throw Span::NotEnoughNumbersException();

	std::list<int>::iterator current = this->_storage.begin();
	std::list<int>::iterator next = ++this->_storage.begin();
	unsigned int span = std::abs(*next - *current);
	while (next != this->_storage.end())
	{
		++current;
		++next;
		unsigned int tmp = std::abs(*next - *current);
		if (tmp < span)
			span = tmp;
	}
	return(span);
}
