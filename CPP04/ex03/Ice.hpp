/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:35:42 by hitran            #+#    #+#             */
/*   Updated: 2025/02/12 13:56:28 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &other);
		Ice &operator=(const Ice &other);
		virtual ~Ice();

		virtual Ice* clone() const override;
		virtual void use(ICharacter& target) override;

	protected:
};
