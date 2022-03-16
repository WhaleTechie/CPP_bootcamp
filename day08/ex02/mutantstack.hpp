/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:43:03 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/28 23:43:03 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <string>
# include <sstream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		virtual ~MutantStack();
		MutantStack(const MutantStack & other);
		MutantStack & operator=(MutantStack const & other);

		typedef typename std::stack<T>::container_type::iterator iterator;
        
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;


		iterator begin();
        const_iterator begin() const;
		iterator end();
        const_iterator end(void) const;
};

#endif
