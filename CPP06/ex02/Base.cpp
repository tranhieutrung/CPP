/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:36 by hitran            #+#    #+#             */
/*   Updated: 2025/04/11 13:49:14 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {};

Base * generate(void) {
	switch (rand() % 3)
	{
	case 0:
		return (new A);

	case 1:
		return (new B);

	default:
		return (new C);
	}
}

//dynamic_cast with a pointer: If fails, returns nullptr
void identify(Base* p) {
	if (p == nullptr) {
		std::cerr << "Error: null pointer" << std::endl;
	} else if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unknown" << std::endl;
	}
}

//dynamic_cast with a reference: If fails, throws a std::bad_cast exception.
void identify(Base& p) {
	try {
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (const std::bad_cast&) {
		try {
			dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		} catch (const std::bad_cast&) {
			try {
				dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			} catch (const std::bad_cast&) {
				std::cout << "Unknown" << std::endl;
			}
		}
	}
}
