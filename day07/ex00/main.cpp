/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <lkrinova@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:47:08 by lkrinova          #+#    #+#             */
/*   Updated: 2021/11/24 15:47:08 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main( void )
{
    int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
    std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	std::cout << "----------------------------" << std::endl;

	float floatA = 3.5;
	float floatB = 2.9;

	std::cout << "floatA: " << floatA << std::endl;
	std::cout << "floatB: " << floatB << std::endl;
	std::cout << "swap(floatA, floatB)" << std::endl;
	swap(floatA, floatB);
	std::cout << "floatA: " << floatA << std::endl;
	std::cout << "floatB: " << floatB << std::endl;

	std::cout << "Explicit:" << std::endl;
	std::cout << "\tmin<float>(floatA, floatB): " << min<float>(floatA, floatB) << std::endl;
	std::cout << "\tmax<float>(floatA, floatB): " << max<float>(floatA, floatB) << std::endl;

	std::cout << "Implicit:" << std::endl;
	std::cout << "\tmin(floatA, floatB): " << min(floatA, floatB) << std::endl;
	std::cout << "\tmax(floatA, floatB): " << max(floatA, floatB) << std::endl;

	std::cout << "----------------------------" << std::endl;

	double doubleA = 2000.452;
	double doubleB = -124.0;

	std::cout << "doubleA: " << doubleA << std::endl;
	std::cout << "doubleB: " << doubleB << std::endl;
	std::cout << "swap<int>(doubleA, doubleB)" << std::endl;
	swap<double>(doubleA, doubleB);
	std::cout << "doubleA: " << doubleA << std::endl;
	std::cout << "doubleB: " << doubleB << std::endl;

	std::cout << "Explicit:" << std::endl;
	std::cout << "\tmin<double>(doubleA, doubleB): " << min<double>(doubleA, doubleB) << std::endl;
	std::cout << "\tmax<double>(doubleA, doubleB): " << max<double>(doubleA, doubleB) << std::endl;

	std::cout << "Implicit:" << std::endl;
	std::cout << "\tmin(doubleA, doubleB): " << min(doubleA, doubleB) << std::endl;
	std::cout << "\tmax(doubleA, doubleB): " << max(doubleA, doubleB) << std::endl;
    return 0;
}

// class Awesome
// {
//     public:
//         Awesome(void) : _n(0) {}
//         Awesome( int n ) : _n( n ) {}
//         Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
//         bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
//         bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
//         bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
//         bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
//         bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
//         bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
//         int get_n() const { return _n; }
//         private:
//         int _n;
// };

// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

// int main(void)
// {
//     Awesome a(2), b(4);
//     swap(a, b);


//     std::cout << a << " " << b << std::endl;
//     std::cout << max(a, b) << std::endl;
//     std::cout << min(a, b) << std::endl;
//     return (0);
// }