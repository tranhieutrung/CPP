/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:50:22 by hitran            #+#    #+#             */
/*   Updated: 2025/02/04 14:34:46 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string  &name);
		FragTrap(const FragTrap &source);
		~FragTrap();
		
		FragTrap &operator=(const FragTrap &other);
		
		void	highFivesGuys();

	private:

};
