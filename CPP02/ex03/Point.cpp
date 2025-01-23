/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 22:38:00 by hitran            #+#    #+#             */
/*   Updated: 2025/01/23 13:55:15 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {
}


Point::Point(const float num1, const float num2): _x(num1), _y(num2) {
}

Point::Point(const Point &other): _x(other._x),	_y(other._y) {
}

Point::~Point() {
}

float Point::xFloat(void) const {
	return (this->_x.toFloat());
}

float Point::yFloat(void) const {
	return (this->_y.toFloat());
}

Point &Point::operator=(const Point &other) {
	(void)other; //_x and _y are const, cannot change
	return (*this);
}
