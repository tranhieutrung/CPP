/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:26:39 by hitran            #+#    #+#             */
/*   Updated: 2025/04/14 11:46:21 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template <typename T> void swap(T &para1, T &para2) {
	T tmp = para1;
	
	para1 = para2;
	para2 = tmp;
}

template <typename T> T min(T &para1, T &para2) {
	return ((para1 < para2) ? para1 : para2);
}

template <typename T> T max(T &para1, T &para2) {
	return ((para1 > para2) ? para1 : para2);
}
