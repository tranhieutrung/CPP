# C++ Module 09
# Introduction
This module introduces containers and polymorphic behavior in C++, emphasizing performance and understanding of how standard containers work internally. The goal is re-implementing simplified versions of standard containers and solving problems that involve managing data efficiently without relying solely on STL magic.

# Exercises
## Exercise 00: Bitcoin Exchange
- Objective: Read historical exchange rates and match them with user-provided dates and values.
- Container Used: std::map<std::string, double> <br>
    Why:
    - map keeps the elements sorted by key (the date), which makes range-based search efficient.
    - Lookup and insertion operations are logarithmic time, suitable for the problem's nature.
    - We can easily find the closest date before a given one using lower_bound() or upper_bound().

- Usage:
```bash
cd ex00
make
./btc inputfile
```
- Example:
```bash
./btc input.txt
```
## Exercise 01: RPN Calculator
- Objective: Implement a Reverse Polish Notation calculator that parses and computes expressions.
- Container Used: std::stack<int> <br>
    Why:
    - RPN expressions use a LIFO (Last In, First Out) structure.
    - std::stack provides a clean and simple interface to push, pop, and top, which aligns with how RPN works.
    - It’s easy to implement operations by popping two values, applying the operator, and pushing the result back.

- Usage:
```bash
cd ex01
make
./RNP "<list of numbers and operators"
```

- Example:
```bash
./RNP "8 9 * 9 - 2 + 0 *"
```

## Exercise 02: PmergeMe
- bjective: Sort large sequences of integers efficiently and measure performance.
- Containers Used: std::deque<unsigned int> and std::vector<unsigned int><br>
    Why:
    - std::deque is more efficient than vector when it comes to inserting at the front or middle, making it suitable for merge-insert sorting logic.
    - std::vector has faster random access and better memory locality, which improves sorting performance for large datasets.
    - Using both allows a comparison of how different container structures affect performance in real-world use cases.
- Usage:
```bash
cd ex02
make
./PmergeMe <list of numbers>
```

- Example:
```bash
./RNP 9 8 7 6 5  4 3 2 1
```