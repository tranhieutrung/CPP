# C++ Module 02
# Introduction
This module introduces ad-hoc polymorphism, operator overloading, and the Orthodox Canonical Form in C++. It creates classes that follow these principles and practice working with fixed-point numbers.
# Exercises
## Exercise 00: My First Class in Orthodox Canonical Form
- Create a Fixed class using Orthodox Canonical Form.
- Implement:
    - Default constructor (initialize value to 0).
    - Copy constructor.
    - Copy assignment operator.
    - Destructor.
    - getRawBits() and setRawBits(int) to access internal value.
- Usage:
```bash
cd ex00
make
./Fixed
```
## Exercise 01: Improved Fixed-Point Class
- Add constructors to Fixed:
    - Integer constructor: Convert integer to fixed-point value.
    - Float constructor: Convert floating-point to fixed-point value.
- Implement:
    - toFloat() - Convert fixed-point to float.
    - toInt() - Convert fixed-point to integer.
    - Overload << (insertion operator) to print fixed-point numbers.
- Usage:
```bash
cd ex01
make
./UsefulFixed
```

## Exercise 02: Operator Overloading
- Overload operators for Fixed:
    - Comparison operators: >, <, >=, <=, ==, !=
    - Arithmetic operators: +, -, *, /
    - Increment/Decrement operators (pre/post).
- Implement:
    - min() and max() to return the smallest/largest value.

- Usage:
```bash
cd ex02
make
./Operators
```

## Exercise 03: BSP (Point in Triangle)
- Create a Point class (Orthodox Canonical Form).
- Implement bool bsp(Point a, Point b, Point c, Point point) to check if a point (point) is inside a triangle (abc).
- Usage:
```bash
cd ex03
make
./BSQ
```

# Result: 100%

![Result](https://github.com/tranhieutrung/CPP/blob/main/CPP02/CPP02_result.png)
