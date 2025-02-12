/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:53 by hitran            #+#    #+#             */
/*   Updated: 2025/02/12 12:08:25 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		
		Dog 	&operator=(const Dog &other);
		void	makeSound() const override;

	private:
		Brain	*_brian;
};
