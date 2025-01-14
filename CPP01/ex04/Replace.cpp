/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:21 by hitran            #+#    #+#             */
/*   Updated: 2025/01/14 11:19:18 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string Replace::replace(	const std::string &source, 
								const std::string &s1,
								const std::string &s2) {
	if (s1.empty()) {
		return (source);
	}

	std::string result;
	size_t pos = 0, found_pos;

	while (1) {
		found_pos = source.find(s1, pos);
		if (found_pos != std::string::npos) {
			result.append(source, pos, found_pos - pos);
			result += s2;
			pos = found_pos + s1.length();
		} else {
			result.append(source, pos, source.length() - pos);
			break ;
		}
	}
	return (result);
}
