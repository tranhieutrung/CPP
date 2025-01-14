/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/01/14 15:32:32 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int handleError(const std::string message) {
	std::cerr << "Error: " << message << std::endl;
	return (1);
}

int invalidNumberArgs(int ac) {
	if (ac != 4 ) {
		return (handleError("Invalid number of arguments!"));
	}
	return (0);
}

int isEmptyArgs( const std::string &infile,	const std::string  &s1) {
	if (infile.empty() || s1.empty()) {
		return (handleError("Empty arguments!"));
	}
	return (0);
}

int writeFile(const std::string& outfile, const std::string& data) {
	std::ofstream ofs(outfile.c_str());
	if (!ofs) {
		handleError(outfile + ": Invalid output file.");
		return (1);
	}
	ofs << data;
	ofs.close();
	return (0);
}

int main(int ac, char **av) {
	if (invalidNumberArgs(ac))
		return (EXIT_FAILURE);

	std::string infile = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (isEmptyArgs(infile, s1))
		return (EXIT_FAILURE);
	
	std::ifstream ifs(infile);
	if (!ifs) {
		return (handleError("Invalid input file."));
	}

	std::string content, line;
	while (std::getline(ifs, line)) {
		content += line;
		if (!ifs.eof()) {
			content += "\n";
		}
	}
	ifs.close();

	std::string replacedData = Replace::replace(content, s1, s2);
	return (writeFile(infile + ".replace", replacedData));
}
