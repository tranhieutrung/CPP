/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/25 10:16:05 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	// Test 1:
	std::cout << "Test 1: " << std::endl;
	int num[] = {1, 2, 3, 4, 5};
	std::string str[] = {"Hello", "42", "World", "!"};

	std::cout << "Test with integer array:" << std::endl;
	iter(num, 5, print);

	std::cout << std::endl << "Test with string array:" << std::endl;
	iter(str, 4, print);

	// Test 2:
	std::cout << std::endl << "Test 2: " << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	
	return 0;
}
