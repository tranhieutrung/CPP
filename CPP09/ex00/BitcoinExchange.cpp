/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/22 13:51:13 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other): _priceMap(other._priceMap) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other) {
		this->_priceMap = other._priceMap;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

const std::string parseDate(const std::string &date) {
	struct tm tm = {};
	
	if (!strptime(date.c_str(), "%Y-%m-%d", &tm)) {
		throw (std::runtime_error("bad input => " + date));
	}

	struct tm check = tm;

	time_t rawtime = mktime(&check); //mktime normalizes the date to the correct date
	if (rawtime == -1 || check.tm_mday != tm.tm_mday
	 || check.tm_mon != tm.tm_mon || check.tm_year != tm.tm_year) {
		throw std::runtime_error("bad input => " + date);
	}
	
	return (date);
}

const double parseNumber(const std::string &  num, double limit) {
	char *end;
	double price = std::strtod(num.c_str(), &end);

	if (*end != '\0') {
		throw (std::runtime_error("not a valid number."));
	} else if (price < 0) {
		throw (std::runtime_error("not a positive number."));
	} else if (price < 0 || price > limit) {
		throw (std::runtime_error("too large a number."));
	}
	return (price);
}

// #include <iomanip> //setprecision
// void printPice(std::map<std::string, double>map) {
// 	//print price
// 	std::cout << "date,exchange_rate" << std::endl;
// 	for (auto &pair : map) {
// 		std::cout << pair.first << "," << std::fixed << std::setprecision(2) << pair.second <<std::endl;
// 	}
// }

void BitcoinExchange::loadPriceMap(std::string dataPath) {
	std::ifstream database(dataPath);
	std::string line;
	getline(database, line);
	while (getline(database, line)) {
		size_t pos = line.find(',');
		if (pos == std::string::npos) {
			throw (std::runtime_error("Database: Invalid line format: " + line));
		}
		this->_priceMap.emplace(parseDate(line.substr(0, pos)),
								parseNumber(line.substr(pos + 1), 1000000));
	}
	// printPice(this->_priceMap);
}

double BitcoinExchange::searchPrice(std::string date) {
	std::map<std::string, double>::iterator it = this->_priceMap.upper_bound(parseDate(date));
	
	if (it == this->_priceMap.begin()) {
		throw (std::runtime_error("no data."));
	}
	--it;
	return (it->second);
}

void BitcoinExchange::processInput(std::string inputPath) {
	std::fstream input(inputPath);
	std::string line;
	getline(input, line);
	while (getline(input, line)) {
		if (line.empty()) {
			continue;
		}
		size_t pos = line.find(" | ");
		if (pos == std::string::npos) {
			std::cerr << "Error: bad input => " + line << std::endl;
			continue;
		}

		try {
			std::string date = parseDate(line.substr(0, pos));
			double price = searchPrice(date);
			double value = parseNumber(line.substr(pos + 3), 1000);
			std::cout << date << " => " << value << " = " << value * price << std::endl;
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			;
		}
	}
}
