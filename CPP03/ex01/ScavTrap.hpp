/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:50:22 by hitran            #+#    #+#             */
/*   Updated: 2025/02/04 13:33:20 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string  &name);
		ScavTrap(const ScavTrap &source);
		~ScavTrap();
		
		ScavTrap &operator=(const ScavTrap &other);
		
		void	attack(const std::string& target);
		void	guardGate();

	private:

};
