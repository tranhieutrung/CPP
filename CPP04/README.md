# C++ Module 04
# Introduction
This module introduces subtype polymorphism, abstract classes, and interfaces in C++. It helps in learning how to use virtual functions and design flexible, reusable class structures.
# Exercises
## Exercise 00: Basic Polymorphism
- Create a base class Animal with:
    - Protected attribute: std::string _type.
    - Virtual function makeSound(), which prints an appropriate sound.
- Create derived classes Dog and Cat, each overriding makeSound().
- Add getType() to return the animal type.

- Usage:
```bash
cd ex00
make
./Polymorphism
```
## Exercise 01: Brain & Deep Copy
- Implement a Brain class with an array of std::string (100 elements).
- Modify Dog and Cat to contain a Brain* object.
- Ensure deep copying: copying a Dog or Cat should not create a shallow copy.
- Usage:
```bash
cd ex01
make
./Inheritance
```

## Exercise 02: Abstract Class
- Convert Animal into an abstract class (AAnimal) by making makeSound() a pure virtual function:
```cpp
virtual void makeSound() const = 0;
```
- This prevents direct instantiation of Animal.
- Dog and Cat must still implement makeSound().

- Usage:
```bash
cd ex02
make
./Abstract
```

## Exercise 03: Interface & Materia System
- Implement an abstract class AMateria:
    - std::string type
    - AMateria* clone() = 0; (pure virtual function)
    - void use(ICharacter& target);
- Implement Ice and Cure, which override clone() and use().
- The two interfaces, ICharacter and IMateriaSource, must be exactly the same as in the subject.
- Create a Character class with an inventory of 4 Materia slots. It must have these member functions: getName, equip, unequip and use. It also needs the getInventory function to retrieve its inventory..
- Implement MateriaSource to learn and create new Materia dynamically.
- Usage:
```bash
cd ex03
make
./Interfaces
```

# Result: 100%

![Result](https://github.com/tranhieutrung/CPP/blob/main/CPP04/CPP04_result.png)
