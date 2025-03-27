/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:26:39 by hitran            #+#    #+#             */
/*   Updated: 2025/03/27 15:45:25 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <cmath>
# include <iomanip>

class ScalarConverter
{
	public:
		static void convert(const std::string str);
	
	private:
		ScalarConverter() = delete;
		ScalarConverter(const ScalarConverter &other) = delete;
		~ScalarConverter() = delete;
		
		ScalarConverter &operator=(const ScalarConverter &other) = delete;
};
