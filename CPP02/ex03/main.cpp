/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:35:38 by hitran            #+#    #+#             */
/*   Updated: 2025/01/22 14:25:19 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main() {
    // Test 1: Point inside the triangle
    Point a(0.0f, 0.0f), b(5.0f, 0.0f), c(2.0f, 5.0f);
    Point inside(2.0f, 2.0f);
    std::cout << "Test 1 (Point inside triangle): " 
              << (bsp(a, b, c, inside) ? "Inside" : "Outside") << std::endl;

    // Test 2: Point on an edge of the triangle
    Point onEdge(2.0f, 0.0f);
    std::cout << "Test 2 (Point on edge): " 
              << (bsp(a, b, c, onEdge) ? "Inside" : "Outside") << std::endl;

    // Test 3: Point outside the triangle
    Point outside(6.0f, 6.0f);
    std::cout << "Test 3 (Point outside triangle): " 
              << (bsp(a, b, c, outside) ? "Inside" : "Outside") << std::endl;

    // Test 4: Point at one of the triangle's vertices
    Point vertex(0.0f, 0.0f);
    std::cout << "Test 4 (Point at vertex): " 
              << (bsp(a, b, c, vertex) ? "Inside" : "Outside") << std::endl;

    // Test 5: Point far away from the triangle
    Point farAway(100.0f, 100.0f);
    std::cout << "Test 5 (Point far away): " 
              << (bsp(a, b, c, farAway) ? "Inside" : "Outside") << std::endl;

    return 0;
}
