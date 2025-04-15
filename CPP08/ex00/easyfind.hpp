/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:49:21 by hitran            #+#    #+#             */
/*   Updated: 2025/04/15 13:18:26 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &haystack, int needle) {
	typename T::iterator it = std::find(haystack.begin(), haystack.end(), needle);
	if (it != haystack.end()) {
		return (it);
	} else {
		throw std::runtime_error("Not found");
	}
}
