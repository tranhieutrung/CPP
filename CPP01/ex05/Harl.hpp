/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:41:50 by hitran            #+#    #+#             */
/*   Updated: 2025/01/14 13:38:49 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

# define DEBUG "I love having extra bacon for my burger. I really do!"
# define INFO "I cannot believe adding extra bacon costs more money."
# define WARNING "I think I deserve to have some extra bacon for free."
# define ERROR "This is unacceptable! I want to speak to the manager now."

class Harl
{
	public:
		Harl();
		~Harl();
		void complain( std::string level );

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};
