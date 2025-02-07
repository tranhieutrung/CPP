/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:53 by hitran            #+#    #+#             */
/*   Updated: 2025/02/07 12:57:11 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &source);
		~Dog();
		
		Dog 	&operator=(const Dog &other);
		void	makeSound() const override;

	private:
		Brain	*_brian;
};
