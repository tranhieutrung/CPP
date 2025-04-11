/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:25:54 by hitran            #+#    #+#             */
/*   Updated: 2025/04/11 15:57:08 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void convertPseudo(const std::string s) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if ((s == "-inff" || s == "+inff" || s == "nanf")) {
		std::cout << "float: " << s << std::endl;
		std::cout << "double: " << s.substr(0, s.length() - 1) << std::endl;
	} else {
		std::cout << "float: " << s + "f" << std::endl;
		std::cout << "double: " << s << std::endl;
	}
}

void convertChar(const char c) {
	if (isprint(c)) {
		std::cout << "char: '" << c << "'" << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void convertNum(const std::string s) {
	try {
		int intNum = std::stoi(s.c_str());

		if (!isInteger(s) || !isascii(intNum)) {
			std::cout << "char: impossible" << std::endl;
		} else if (isprint(intNum)) {
			std::cout << "char: '" << static_cast<char>(intNum) << "'" << std::endl;
		} else {
			std::cout << "char: Non displayable" << std::endl;
		}
		std::cout << "int: " << intNum << std::endl;
	} catch (const std::exception&) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}

	try {
		float floatNum = std::stof(s.c_str());
		std::cout << "float: " << std::fixed << std::setprecision(1) << floatNum << "f" << std::endl;
	} catch (const std::exception&) {
		std::cout << "float: impossible" << std::endl;
	}

	try {
		double doubleNum = std::stod(s.c_str());
		std::cout << "double: " << std::fixed << std::setprecision(1) << doubleNum << std::endl;
	} catch (const std::exception&) {
		std::cout << "double: impossible" << std::endl;
	}
}

void ScalarConverter::convert(const std::string s) {
	if (isPseudo(s)) {
		convertPseudo(s);
	} else if (isChar(s)) {
		convertChar(s[0]);
	} else if (isNumber(s)) {
		convertNum(s);
	} else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}
