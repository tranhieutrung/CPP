/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/10 14:49:11 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data data;

	data.number = 10;
	data.string = "Hello world!";

	uintptr_t ptr = Serializer::serialize(&data);

	Data *newData = Serializer::deserialize(ptr);

	std::cout << "number = " << newData->number << std::endl;
	std::cout << "string = " << newData->string << std::endl;

	return (0);
}
