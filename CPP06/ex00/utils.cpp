/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:31:06 by hitran            #+#    #+#             */
/*   Updated: 2025/04/10 13:51:06 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isNumber(const std::string& s) {
	std::regex numberPattern(R"(^[-+]?\d+(\.\d+)?[f]?$)");
	return std::regex_match(s, numberPattern);
}

bool isChar(const std::string& s) {
	return (s.size() == 1 && (s[0] >= 0 && s[0] <= 127) && !std::isdigit(s[0]));
}

bool isPseudo(const std::string& s) {
	return (s == "-inff" || s == "+inff" || s == "nanf" 
			|| s == "-inf" || s == "+inf" || s == "nan");
}

bool isValid(const std::string& s) {
	return (isChar(s) || isNumber(s) || isPseudo(s));
}