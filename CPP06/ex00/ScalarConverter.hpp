/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:26:39 by hitran            #+#    #+#             */
/*   Updated: 2025/03/26 14:31:53 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		~ScalarConverter();
		
		ScalarConverter 			&operator=(const ScalarConverter &other);
		
		void convert(const std::string str);
	
	private:

};
