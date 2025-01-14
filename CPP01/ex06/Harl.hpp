/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:41:50 by hitran            #+#    #+#             */
/*   Updated: 2025/01/14 14:04:05 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

# define DEBUG "[ DEBUG ] \nI love having extra bacon for my burger. I really do!\n"
# define INFO "[ INFO ] \nI cannot believe adding extra bacon costs more money.\n"
# define WARNING "[ WARNING ] \nI think I deserve to have some extra bacon for free.\n"
# define ERROR "[ ERROR ] \nThis is unacceptable! I want to speak to the manager now.\n"
# define INVALID "[ Invalid complaint level! ] \n"

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
