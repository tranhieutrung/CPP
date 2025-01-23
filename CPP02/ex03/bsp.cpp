/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:23:26 by hitran            #+#    #+#             */
/*   Updated: 2025/01/23 10:07:59 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area(Point const a, Point const b, Point const c) {
	return (
			std::abs(
					0.5 * (
						a.xFloat() * (b.yFloat() - c.yFloat()) + 
						b.xFloat() * (c.yFloat() - a.yFloat()) +
						c.xFloat() * (a.yFloat() - b.yFloat())
					)
			)
	);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	return (area(a, b, c) == area(a, b, point) + area(a, point, c) + area(point, b, c));
}
