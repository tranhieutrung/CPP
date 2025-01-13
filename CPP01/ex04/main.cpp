/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/01/13 22:26:39 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void handleError(const std::string message) {
	std::cerr << "Error: " << message << std::endl;
	exit (1);
}

int main(int ac, char **av) {
	if (ac != 4 ) {
		handleError("Invalid number of arguments!");
	}
	std::string fileName = av[0];
	std::string s1 = av[1];
	std::string s2 = av[2];

	if (fileName.empty() || s1.empty() || s2.empty()) {
		handleError("Empty arguments!");
	}
	std::ifstream ifs(fileName);
	if (!ifs) {
		handleError("Invalid input file!");
	}

	std::string fileData;
	std::string	replacedData;

	while (std::getline(ifs, fileData)) {
		replacedData += Replace::replace(fileData, s1, s2);
		if (ifs.eof())
			replacedData += "\n";
	}

	ifs.close();
	
	std::string outfile = std::string(av[1]) + ".replace";
	std::ofstream ofs(outfile.c_str());
	if (!ofs) {
		handleError("Invalid Output File!");
	}
	ofs << replacedData;
	ofs.close();

	return (0);
}
