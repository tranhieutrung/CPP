/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:15:13 by hitran            #+#    #+#             */
/*   Updated: 2025/02/12 12:06:21 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class ICharacter
{
	public:
		ICharacter();
		ICharacter(std::string const & type);
		ICharacter(const ICharacter &other);
		~ICharacter();

		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(ICharacter* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

	protected:
};
