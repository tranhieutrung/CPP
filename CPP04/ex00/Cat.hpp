/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:30 by hitran            #+#    #+#             */
/*   Updated: 2025/02/10 10:00:13 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		
		Cat 	&operator=(const Cat &other);
		void	makeSound() const override;

	private:
};
