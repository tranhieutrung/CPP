/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:26:39 by hitran            #+#    #+#             */
/*   Updated: 2025/04/10 13:05:06 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <cmath>
# include <iomanip>
# include <regex>
# include <cstdlib>

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

bool isNumber(const std::string& s);
bool isChar(const std::string& s);
bool isPseudo(const std::string& s);
bool isValid(const std::string& s);