/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:40:23 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 14:14:50 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>
# include <iostream>

class Weapon
{
	public:
		Weapon(const std::string &type);
		~Weapon();
		
		const std::string &getType() const;
		void setType(const std::string type);

	private:
		std::string _type;
};
