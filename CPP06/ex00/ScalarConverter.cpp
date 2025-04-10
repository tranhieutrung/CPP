/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:36 by hitran            #+#    #+#             */
/*   Updated: 2025/04/10 13:42:28 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void printPseudo(const std::string s) {
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
    if (!isValid(s)) {
        std::cerr << "Error: Invalid input" << std::endl;
        return;
    } else if (isChar(s)) {
        printChar(s[0]);
        return;
    } else if (isPseudo(s)) {
        printPseudo(s);
        return;
    }

    // Print char and int conversion
    try {
        int intValue = std::stoi(s.c_str());
        if (isprint(intValue)) {
            std::cout << "char: '" << static_cast<char>(intValue) << "'" << std::endl;
        } else if (isascii(intValue)) {
            std::cout << "char: Non displayable" << std::endl;
        } else {
            std::cout << "char: impossible" << std::endl;
        }
        std::cout << "int: " << intValue << std::endl;
    } catch (const std::exception &e) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }

    // Print float conversion
    try {
        float floatValue = std::stof(s.c_str());

        // Check if float overflows
        if (floatValue > std::numeric_limits<float>::max() || floatValue < std::numeric_limits<float>::lowest()) {
            std::cout << "float: impossible" << std::endl;
        } else {
            std::cout << "float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
        }
    } catch (const std::exception &e) {
        std::cout << "float: impossible" << std::endl;
    }

    // Print double conversion
    try {
        double doubleValue = std::stod(s.c_str());

        // Check if double overflows
        if (doubleValue > std::numeric_limits<double>::max() || doubleValue < std::numeric_limits<double>::lowest()) {
            std::cout << "double: impossible" << std::endl;
        } else {
            std::cout << "double: " << doubleValue << std::endl;
        }
    } catch (const std::exception &e) {
        std::cout << "double: impossible" << std::endl;
    }
}
