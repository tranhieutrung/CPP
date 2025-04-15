# C++ Module 07
# Introduction
This module introduces C++ templates, one of the most powerful features in the language. Templates allow developers to write generic, reusable code that works with any data type. This avoids code duplication and allows for more flexibility and type safety at compile-time.

# Exercises
## Exercise 00: Templates & Generic Functions
- Implement the following function templates:
    - swap: Swaps two elements.
    - min: Returns the smaller of the two.
    - max: Returns the larger of the two.
- All functions must work with any comparable data type (int, float, std::string, etc.).

- Usage:
```bash
cd ex00
make
./templates
```

## Exercise 01: Template Iterators
- Implement a function template called iter():
    - Prototype: template<typename T, typename F> void iter(T* array, size_t length, F function)
    - Applies a function to each element of the array.
    - Create a test function (print) to apply on different arrays.
- Requirements:
    - Must work with various data types (int[], std::string[], char[], etc.).
    - Must not modify the array if the function doesn't intend to.

- Usage:
```bash
cd ex01
make
./iter
```

## Exercise 02: A Generic Array Class
- Implement a class template Array<T> that mimics a C++ array:
    - Template class with type T.
    - Must support dynamic memory allocation.
- Includes:
    - Orthodox members
    - Index operator operator[] with bounds checking. Out-of-bounds access must throw a standard exception (std::exception).
    - size() method to return the number of elements.

- Usage:
```bash
cd ex02
make
./array
```