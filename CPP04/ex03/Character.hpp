/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:54:35 by hitran            #+#    #+#             */
/*   Updated: 2025/02/17 15:14:10 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &other);
		Character &operator=(const Character &other);
		virtual ~Character();

		virtual std::string const &getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		AMateria *getInventory(int index);

	private:
		std::string	_name;
		AMateria	*_inventory[4];
};
