/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:26:39 by hitran            #+#    #+#             */
/*   Updated: 2025/04/25 10:19:49 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

// template <typename T, typename F>
// void iter(T *array, size_t length, F function) {
// 	if (!array) {
// 		return;
// 	}
// 	for (size_t index = 0; index < length; index++) {
// 		function(array[index]);
// 	}
// }

template <typename T>
void iter(T *array, size_t length, void (*function)(T const &)) {
    if (!array) {
        return;
    }
    for (size_t index = 0; index < length; index++) {
        function(array[index]);
    }
}