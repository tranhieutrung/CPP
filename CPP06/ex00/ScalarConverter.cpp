/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:36 by hitran            #+#    #+#             */
/*   Updated: 2025/03/28 10:41:50 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isPseudo(const std::string s) {
	return (s == "-inff" || s == "+inff" || s == "nanf" ||
			s == "-inf" || s == "+inf" || s == "nan");
}

void printPseudo(const std::string s) {
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: " << ((s == "-inff" || s == "+inff" || s == "nanf") ? s : s + "f") << std::endl;
	std::cout << "double: " << (s.back() == 'f' ? s.substr(1) : s) << std::endl;
}

bool isChar(const std::string s) {
	return (s.size() == 1 && (s[0] >= 0 && s[0] <= 127) && !std::isdigit(s[0]));
}

bool isChar(int intNum, float floatNum, double doubleNum) {
	double check;
	return intNum >= 0 && intNum <= 127 && 
			std::modf(floatNum, &check) == 0.0 && 
			std::modf(doubleNum, &check) == 0.0;
}

bool isInteger(bool isInt, float floatNum, double doubleNum) {
	double check;
	return 	isInt || 
			(std::modf(floatNum, &check) == 0.0 && 
			std::modf(doubleNum, &check) == 0.0);
}

void printChar(const char c) {
	if (isprint(c)) {
		std::cout << "char: '" << c << "'" << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}


void ScalarConverter::convert(const std::string s) {
	if (s.empty()) {
		std::cerr << "Error: Empty string" << std::endl;
		return ;
	} else if (isPseudo(s)) {
		printPseudo(s);
		return ;
	} else if (isChar(s)) {
		printChar(s[0]);
		return ;
	}

	char *end;
	int intValue = std::strtol(s.c_str(), &end, 10);
	bool isInt = (*end == '\0');

	float floatValue = std::strtof(s.c_str(), &end);
	bool isFloat = (*end == 'f' && *(end + 1) == '\0');

	double doubleValue = std::strtod(s.c_str(), &end);
	bool isDouble = (*end == '\0');
	
	if (!isInt && !isFloat && !isDouble) {
		std::cerr << "Error: Invalid input" << std::endl;
		return ;
	}
	if (!isChar(intValue, floatValue, doubleValue)) {
		std::cout << "char: Impossible" << std::endl;		
	} else if (intValue > 31 && intValue < 127) {
		std::cout << "char: '" << static_cast<char>(intValue) << "'" << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;		
	}
	if (isInteger(isInt, floatValue, doubleValue)) {
		std::cout << "int: " << intValue << std::endl;
	} else {
		std::cout << "int: impossible" << std::endl;
	}
	        
	// Print float conversion
	std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
	// Print double conversion
	std::cout << "double: " << doubleValue << std::endl;
}
