/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:13 by hitran            #+#    #+#             */
/*   Updated: 2025/02/12 11:39:38 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

/*
	The AAnimal class is an abstract class because it contains a pure virtual 
	function `makeSound()`. A pure virtual function (denoted by `= 0`) has no 
	implementation in the AAnimal class itself.

	This forces any derived class (such as Dog, Cat, etc.) to implement its own 
	version of `makeSound()`. As a result, we cannot create an object of type 
	AAnimal directly. It serves as a base class to define common behavior for all
	AAnimals, while allowing flexibility for specific implementations of AAnimal 
	sounds in derived classes.
*/
class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &other);
		virtual ~AAnimal();
		
		AAnimal 		&operator=(const AAnimal &other);
		virtual void	makeSound() const = 0;
		std::string		get_type() const;
	
	protected:
		std::string		_type;
};
