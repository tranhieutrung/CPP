/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/01/14 12:35:27 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void handleError(const std::string message) {
	std::cerr << "Error: " << message << std::endl;
	exit (EXIT_FAILURE);
}

void checkNumberArgs(int ac) {
	if (ac != 4 ) {
		handleError("Invalid number of arguments!");
	}
}

void checkEmptyArgs(
					const std::string &infile,
					const std::string  &s1,
					const std::string  &s2) {
	if (infile.empty() || s1.empty() || s2.empty()) {
		handleError("Empty arguments!");
	}
}

std::string readFile(const std::string& infile) {
	std::ifstream ifs(infile);
	if (!ifs) {
		handleError("Invalid input file: " + infile);
	}

	std::string content, line;
	while (std::getline(ifs, line)) {
		content += line;
		if (!ifs.eof()) {
			content += "\n";
		}
	}
	ifs.close();
	return content;
}

void writeFile(const std::string& outfile, const std::string& data) {
	std::ofstream ofs(outfile.c_str());
	if (!ofs) {
		handleError("Invalid output file: " + outfile);
	}
	ofs << data;
	ofs.close();
}

int main(int ac, char **av) {
	checkNumberArgs(ac);

	std::string infile = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	checkEmptyArgs(infile, s1, s2);
	
	std::string inputData = readFile(infile);
	std::string replacedData = Replace::replace(inputData, s1, s2);
	writeFile(infile + ".replace", replacedData);

	return (EXIT_SUCCESS);
}
