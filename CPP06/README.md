# C++ Module 06
# Introduction
This module introduces C++ type casting techniques and reinforces understanding of data types, memory representations, and polymorphism. The exercises involve converting scalar types, implementing serialization, and identifying real types using casting.

# Types of Casts in C++
- static_cast<T>(expr): Safely converts between compatible types at compile time (e.g., int to float).
- dynamic_cast<T>(expr): Used for safe downcasting of polymorphic types (classes with at least one virtual function). Returns nullptr or throws an exception if the cast fails.
- const_cast<T>(expr): Adds or removes const or volatile qualifiers. Useful for low-level const-correctness manipulations.
- reinterpret_cast<T>(expr): Reinterprets the bit pattern of a type as another type. It's low-level and should be used with extreme care (e.g., casting a pointer to an integer).

Why Use These Instead of C-Style Casts?
C++ casts:

Are more explicit and safer.

Help the compiler detect incorrect or dangerous conversions.

Make your intent clearer to others reading your code.
# Exercises
## Exercise 00: Conversion of Scalar Types
- Implement a ScalarConverter class with:
    - One static method: convert.
    - It converts a scalar literal (char, int, float, double) from a string to its value in all four types.
    - Must handle pseudo-literals such as nan, +inf, -inf, and their float variants (nanf, +inff, -inff).
    - Use C++ type casting (e.g., static_cast) to convert between types.
    - If conversion is impossible (overflow, invalid input), print a meaningful message.
- Restrictions:
    - The class must not be instantiated.
    - Only decimal notation is used for int/float/double.
    - Non-displayable char should result in "Non displayable".
    - Input like "nan" or "42.0f" must be properly interpreted.

- Usage:
```bash
cd ex00
make
./convert <string>
```

- Example:
```bash
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
```

## Exercise 01: Serialization
- Create a Serializer class with:
    - Static method uintptr_t serialize(Data* ptr).
    - Static method Data* deserialize(uintptr_t raw).
    - Convert a pointer to an integer and back again.
- Implement a Data struct with at least one member.
- Test:
    - Create a Data object.
    - Serialize its address, deserialize it back, and verify it points to the same memory.
- Restrictions:
    - No instance of Serializer can be created.
    - Use standard pointer casting with reinterpret_cast.
- Usage:
```bash
cd ex01
make
./serializer
```

## Exercise 02:  Identify Real Type
- Implement:
    - An abstract base class Base with a virtual destructor.
    - Classes A, B, and C inheriting from Base.
- Implement functions:
    - Base* generate(void) → randomly return an instance of A/B/C as a Base*.
    - void identify(Base* p) → print actual type by using pointer and casting.
    - void identify(Base& p) → print actual type by using reference and casting.
- Note: dynamic_cast checks at runtime whether the conversion is valid. If it fails:
    - Returns nullptr when casting pointers.
    - Throws a std::bad_cast exception when casting references.
- Restrictions:
    - Do not use typeid or <typeinfo>.
    - In the reference version (identify(Base&)), using a pointer is forbidden.
    - Use dynamic_cast properly to identify real object type.

- Usage:
```bash
cd ex02
make
./identifier
```