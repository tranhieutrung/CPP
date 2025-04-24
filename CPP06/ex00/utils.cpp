/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:31:06 by hitran            #+#    #+#             */
/*   Updated: 2025/04/24 23:09:28 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isNumber(const std::string& s) {
	std::regex numberPattern(R"(^[-+]?\d+(\.\d+)?[f]?$)");
	return (std::regex_match(s, numberPattern));
}

bool isChar(const std::string& s) {
	if (s.size() != 1)
		return (false);

	int ascii = static_cast<unsigned char>(s[0]);
	return (ascii >= 0 && ascii <= 127 && !std::isdigit(ascii));
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
