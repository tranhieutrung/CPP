/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:30 by hitran            #+#    #+#             */
/*   Updated: 2025/02/17 14:51:50 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		
		Cat 	&operator=(const Cat &other);
		void	makeSound() const override;

	private:
		Brain	*_brain;
};
