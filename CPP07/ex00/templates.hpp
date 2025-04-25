/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:26:39 by hitran            #+#    #+#             */
/*   Updated: 2025/04/25 10:08:48 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void swap(T &para1, T &para2) {
	T tmp = para1;
	
	para1 = para2;
	para2 = tmp;
}

template <typename T> const T min(const T &para1, const T &para2) {
	return ((para1 < para2) ? para1 : para2);
}

template <typename T> const T max(const T &para1, const T &para2) {
	return ((para1 > para2) ? para1 : para2);
}
