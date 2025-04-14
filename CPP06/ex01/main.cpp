/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/14 09:50:13 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data data;

	data.number = 10;
	data.string = "Hello world!";

	std::cout << "Original data:" << std::endl;
	std::cout << "number = " << data.number << std::endl;
	std::cout << "string = " << data.string << std::endl;

	uintptr_t ptr = Serializer::serialize(&data);

	Data *newData = Serializer::deserialize(ptr);

	std::cout << std::endl << "Derived data:" << std::endl;
	std::cout << "number = " << newData->number << std::endl;
	std::cout << "string = " << newData->string << std::endl;

	newData->number = 20;
	newData->string = "Bye bye!";

	std::cout << std::endl << "Derived data after modifying:" << std::endl;
	std::cout << "number = " << newData->number << std::endl;
	std::cout << "string = " << newData->string << std::endl;
	
	std::cout << std::endl << "Original data after modifying:" << std::endl;
	std::cout << "number = " << data.number << std::endl;
	std::cout << "string = " << data.string << std::endl;
	
	return (0);
}
