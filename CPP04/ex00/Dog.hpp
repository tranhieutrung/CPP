/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:53 by hitran            #+#    #+#             */
/*   Updated: 2025/02/10 10:00:17 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		
		Dog 	&operator=(const Dog &other);
		void	makeSound() const override;

	private:
};
