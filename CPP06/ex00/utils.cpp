/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:31:06 by hitran            #+#    #+#             */
/*   Updated: 2025/04/11 16:03:14 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isNumber(const std::string& s) {
	std::regex numberPattern(R"(^[-+]?\d+(\.\d+)?[f]?$)");
	return (std::regex_match(s, numberPattern));
}

bool isChar(const std::string& s) {
	return (s.size() == 1 && (s[0] >= 0 && s[0] <= 127) && !std::isdigit(s[0]));
}

bool isPseudo(const std::string& s) {
	return (s == "-inff" || s == "+inff" || s == "nanf" 
			|| s == "-inf" || s == "+inf" || s == "nan");
}

bool isInteger(const std::string& s) {
	size_t dotPos = s.find('.');
	if (dotPos == std::string::npos) {
		return (true);
	}

	std::string frac = s.substr(dotPos + 1);
	if (!frac.empty() && frac.back() == 'f') {
		frac.pop_back();
	}
		
	return (frac.find_first_not_of('0') == std::string::npos);
}