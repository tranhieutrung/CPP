/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/16 15:27:02 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main(){
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(15);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	MutantStack<int>newMstack;
	newMstack = mstack;

	MutantStack<int>::reverse_iterator it2 = newMstack.rbegin();
	MutantStack<int>::reverse_iterator ite2 = newMstack.rend();

	// std::cout << std::endl << "New stack in reverse: " << std::endl;
	// while (it2 != ite2)
	// {
	// 	std::cout << *it2 << std::endl;
	// 	++it2;
	// }

	std::cout << "The distance is: " << std::distance(it2,ite2) << std::endl;

	std::cout << "The last element in reverse is " << *std::prev(ite2) << std::endl;
	std::cout << "The first element in reverse is " << *std::next(ite2) << std::endl;

	std::advance (it2,1);
	std::cout << "The second element in reverse is: " << *it2 << std::endl;

	return 0;
}
