# C++ Module 08
# Introduction
This module introduces you to the Standard Template Library (STL) in C++. Time to learn how to use containers, iterators, and algorithms to write clean, generic, and efficient code. The focus is on practical usage of templates, standard containers (like vector, and stack), and algorithms (like find, iterators). It is now allowed—and encouraged—to use the STL. Do it as much as possible.

# Exercises
## Exercise 00: Easy Find
- Write a function template easyfind that searches for an integer in a standard container.
- If the value is found, return an iterator to it. Otherwise, throw an exception.
- Usage:
```bash
cd ex00
make
./easyfind
```
## Exercise 01: Span
- Create a class Span that:
    - Stores up to N integers.
    - Allows adding numbers one-by-one using addNumber(int).
    - Throws an exception if exceeding capacity.
- Add methods:
    - shortestSpan(): smallest difference between any two numbers.
    - longestSpan(): largest difference.
    - fillSpan: to fill the Span using a range of iterators, not just individual adds.
Test with at least 10,000 elements.
- Usage:
```bash
cd ex01
make
./Span
```
## Exercise 02: Mutated Abomination
- Implement MutantStack, a custom class that behaves like std::stack but is iterable.
- It must:
    - Inherit from std::stack (or use it internally).
    - Expose begin() and end() iterators so that you can iterate over its content.
- Usage:
```bash
cd ex02
make
./MutantStack
```
