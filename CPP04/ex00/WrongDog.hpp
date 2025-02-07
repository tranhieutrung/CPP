/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:16:58 by hitran            #+#    #+#             */
/*   Updated: 2025/02/07 12:20:47 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
	public:
		WrongDog();
		WrongDog(const WrongDog &source);
		~WrongDog();
		
		WrongDog 	&operator=(const WrongDog &other);
		void		makeSound() const override;

	private:
};
