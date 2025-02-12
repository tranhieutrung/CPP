/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:35:42 by hitran            #+#    #+#             */
/*   Updated: 2025/02/12 14:02:04 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		virtual ~Cure();

		virtual Cure* clone() const override;
		virtual void use(ICharacter& target) override;

	protected:
};
