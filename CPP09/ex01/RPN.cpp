/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:32:18 by hitran            #+#    #+#             */
/*   Updated: 2025/04/17 12:35:39 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other) {}

RPN &RPN::operator=(const RPN &other) {
	return *this;
}

RPN::~RPN() {}

void validateInput(std::string av) {
	std::regex regex(R"(^[0-9 +\-*/]+$)");

	if (std::regex_match(av, regex) == false) {
		throw std::runtime_error("");
	}
}

void	checkOverflow(unsigned int num1, unsigned int num2) {
	if (num1 != num2) {
		std::cerr << "⚠️  Warning: overflow detected" << std::endl;
	}
}

void	calculate(std::stack<unsigned int> &stack, char op) {
	if (stack.size() < 2) {
		throw std::runtime_error("");
	}
	
	unsigned int tmp = stack.top();
	stack.pop();
	unsigned int res = 0;
	
	if (op == '+') {
		res = stack.top() + tmp;
		checkOverflow(res - tmp, stack.top());
	} else if (op == '-') {
		res = stack.top() - tmp;
		checkOverflow(res + tmp, stack.top());
	} else if (op == '*') {
		res = stack.top() * tmp;
		checkOverflow(res / tmp, stack.top());
	} else if (op == '/' && tmp) {
		res = stack.top() / tmp;
		checkOverflow(res * tmp, stack.top());
	} else {
		throw std::runtime_error("");
	}
	stack.pop();
	stack.push(res);
}

void RPN::start(std::string av) {
	validateInput(av);
	
	std::istringstream iss(av);
	std::string token;
	std::stack<unsigned int>	stack;

	while (iss >> token) {
		if (token.size() != 1) {
			throw std::runtime_error("");
		} else if (token[0] >= '0' && token[0] <= '9') {
			stack.push(token[0] - 48);
		} else {
			calculate(stack, token[0]);
		}
	}

	if (stack.size() == 1) {
		std::cout << stack.top() << std::endl;
	} else {
		throw std::runtime_error("");
	}	
}